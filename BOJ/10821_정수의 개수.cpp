/*---------------------------------------------------
	10821 ������ ����
	���ڿ�
	�������� :	���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �̶�, S�� ���ԵǾ��ִ� ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				S�� ù ���ڿ� ������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. ��, 0���� �����ϴ� ������ �־����� �ʴ´�.
	���� :
		Input)	ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 100�̴�.
		Output)	���ڿ� S�� ���ԵǾ� �ִ� ������ ������ ����Ѵ�.
----------------------------------------------------*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string text;
	cin >> text;

	istringstream is(text);
	string temp;

	int answer = 0;
	while (getline(is, temp, ','))
		++answer;

	cout << answer << '\n';

	return 0;
}