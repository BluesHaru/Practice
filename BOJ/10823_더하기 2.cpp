/*---------------------------------------------------
	10823 ���ϱ� 2
	���ڿ�
	�������� :	���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �̶�, S�� ���ԵǾ��ִ� �ڿ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				S�� ù ���ڿ� ������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. �־����� ���� �׻� �ڿ����̴�.
	���� :
		Input)	ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 100�̴�. ���ԵǾ��ִ� ������ 1,000,000���� �۰ų� ���� �ڿ����̴�.
		Output)	���ڿ� S�� ���ԵǾ� �ִ� �ڿ����� ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);

	//string s;
	
	char s[10001];
	string text = "10,20,30, 50, 100 ";
	/*while (scanf_s("%s", s, sizeof(s)) != EOF)
	{
		text += s;
	}*/
	
	istringstream is(text);
	string temp;

	int answer = 0;
	while (getline(is, temp, ','))					
		answer += atoi(temp.c_str());

	answer += atoi(temp.c_str());

	cout << answer << '\n';

	return 0;
}