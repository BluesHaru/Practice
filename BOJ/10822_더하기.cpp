/*---------------------------------------------------
	10822 ���ϱ�
	���ڿ�
	�������� :	���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �̶�, S�� ���ԵǾ��ִ� �ڿ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				S�� ù ���ڿ� ������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. �־����� ���� �׻� �ڿ����̴�.
	���� :
		Input)	ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 100�̴�. ���ԵǾ��ִ� ������ 1,000,000���� �۰ų� ���� �ڿ����̴�.
		Output)	���ڿ� S�� ���ԵǾ� �ִ� �ڿ����� ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;
	long long answer = 0;
	string num;
	int sLen = s.length();
	for (int i = 0; i < sLen; ++i)
	{
		char b = s[i];
		if (',' == b)
		{
			answer += atoi(num.c_str());
			num.clear();
			continue;
		}
		num.push_back(s[i]);
	}
	answer += atoi(num.c_str());

	cout << answer << '\n';

	return 0;
}