/*---------------------------------------------------
	11721 �� ���� ���� ����ϱ�
	�����
	���� : ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����. 
		   �� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��϶�
	���� : 
		Input) ���̴� 100�� ���� �ʴ´�. ���̰� 0�� �ܾ�� �־����� �ʴ´�.
		Output) �ܾ��� ���̰� 10�� ����� �ƴ� ��쿡�� ������ �ٿ��� 10�� �̸��� ���ڸ� ����� ���� �ִ�.	
----------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str, temp;
	cin >> str;
	int size = str.length();
	
	int st = 0;

	for (int i = 0; i < size; ++i)
	{
		if (10 == st)
		{
			cout << temp << '\n';
			temp.clear();
			st = 0;
			temp += str[i];
		}
		else
			temp += str[i];
		++st;
	}
	cout << temp << '\n';

	return 0;
}