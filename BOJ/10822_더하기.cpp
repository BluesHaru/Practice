/*---------------------------------------------------
	10822 더하기
	문자열
	문제정보 :	숫자와 콤마로만 이루어진 문자열 S가 주어진다. 이때, S에 포함되어있는 자연수의 합을 구하는 프로그램을 작성하시오.
				S의 첫 문자와 마지막 문자는 항상 숫자이고, 콤마는 연속해서 주어지지 않는다. 주어지는 수는 항상 자연수이다.
	조건 :
		Input)	첫째 줄에 문자열 S가 주어진다. S의 길이는 최대 100이다. 포함되어있는 정수는 1,000,000보다 작거나 같은 자연수이다.
		Output)	문자열 S에 포함되어 있는 자연수의 합을 출력한다.
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