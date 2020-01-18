/*---------------------------------------------------
	11023 더하기 3
	문자열
	문제정보 :	수 N개가 주어졌을 때, N개의 합을 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 N(1 ≤ N ≤ 100)개의 수가 공백으로 구분되어서 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은 자연수이다. 
				또, 0으로 시작하는 수는 주어지지 않는다.
		Output)	입력받은 수 N개의 합을 출력한다.
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