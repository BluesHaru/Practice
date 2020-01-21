/*---------------------------------------------------
	10820 문자열 분석
	문자열
	문제정보 :	문자열 N개가 주어진다. 이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
				각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.
	조건 :
		Input)	첫째 줄부터 N번째 줄까지 문자열이 주어진다. (1 ≤ N ≤ 100) 문자열의 길이는 100을 넘지 않는다.
		Output)	첫째 줄부터 N번째 줄까지 각각의 문자열에 대해서 소문자, 대문자, 숫자, 공백의 개수를 공백으로 구분해 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 100; ++i)
	{
		string str;
		getline(cin, str);

		int big, small, blank, num;
		big = small = blank = num = 0;

		int sLen = str.length();

		for (int k = 0; k < sLen; ++k)
		{
			if (str[k] == ' ') ++blank;
			else if (str[k] >= '0' && str[k] <= '9') ++num;
			else if (str[k] >= 'A' && str[k] <= 'Z') ++big;
			else if (str[k] >= 'a' && str[k] <= 'z') ++small;
		}

		printf("%d %d %d %d\n", small, big, num, blank);
	}

	return 0;
}