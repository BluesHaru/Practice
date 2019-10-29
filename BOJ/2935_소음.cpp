/*---------------------------------------------------
	2935 소음
	구현
	문제정보 : 문제가 주어졌을 때 결과를 도출해라.
	조건 :
		Input)	정수 A와 B는 모두 10의 제곱 형태이고, 길이는 최대 100자리이다.
		Output)	결과는 A+B 또는 A*B
----------------------------------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, ops, b, answer;
	cin >> a >> ops >> b;
	
	if (a.length() < b.length())
		swap(a, b);

	answer = a;

	if (ops == "+")
	{
		int idx = a.length() - b.length();
		answer[idx] = (answer[idx] == '1' ? '2' : '1');
	}
	else
	{
		int len = b.length() - 1;
		while (len-- > 0)
			answer.push_back('0');
	}
	cout << answer << '\n';

	return 0;
}