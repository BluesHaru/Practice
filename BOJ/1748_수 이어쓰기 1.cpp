/*---------------------------------------------------
	1748 수 이어쓰기 1
	BF
	문제정보 : 1부터 N 까지의 수를 이은 수의 자릿수를 출력하라.
	조건 :
		Input) N ( 1 <= N <= 1,000,000)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	int temp;
	int cnt = 1;
	int cmp = 10;
	int answer = 0;
	for (int i = 1; i <= N; ++i)
	{
		// 자릿수가 늘어날 때마다 조건을 변경한다.
		if (i >= cmp)
		{
			cmp *= 10;
			++cnt;
		}
		answer += cnt;
	}
	cout << answer << '\n';

	return 0;
}