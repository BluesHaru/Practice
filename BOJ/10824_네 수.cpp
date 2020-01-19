/*---------------------------------------------------
	10824 네 수
	문자열
	문제정보 :	네 자연수 A, B, C, D가 주어진다. 이때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오.
				두 수 A와 B를 합치는 것은 A의 뒤에 B를 붙이는 것을 의미한다. 즉, 20과 30을 붙이면 2030이 된다.
	조건 :
		Input)	첫째 줄에 네 자연수 A, B, C, D가 주어진다. (1 ≤ A, B, C, D ≤ 1,000,000)
		Output)	A와 B를 붙인 수와 C와 D를 붙인 수의 합을 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigIntegerAdd(string a, string b)
{
	string temp;
	long long sum = 0;
	while (!a.empty() || !b.empty() || sum)
	{
		if (!a.empty())
		{
			sum += a.back() - '0';
			a.pop_back();
		}
		if (!b.empty())
		{
			sum += b.back() - '0';
			b.pop_back();
		}
		temp.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(temp.begin(), temp.end());
	return temp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string ab, cd;
	ab = a + b;
	cd = c + d;

	string answer = bigIntegerAdd(ab, cd);

	cout << answer << '\n';

	return 0;
}