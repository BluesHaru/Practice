/*---------------------------------------------------
	11023 ���ϱ� 3
	���ڿ�
	�������� :	�� N���� �־����� ��, N���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� N(1 �� N �� 100)���� ���� �������� ���еǾ �־�����. �Է����� �־����� ���� 10,000���� �۰ų� ���� �ڿ����̴�. 
				��, 0���� �����ϴ� ���� �־����� �ʴ´�.
		Output)	�Է¹��� �� N���� ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	getline(cin, s);
	long long answer = 0;
	string num;
	int sLen = s.length();
	
	for (int i = 0; i < sLen; ++i)
	{
		char b = s[i];
		if (' ' == b)
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