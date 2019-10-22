/*---------------------------------------------------
	1904 01타일
	DP
	문제정보 : 00타일과 1타일로 만드는 2진 수열의 개수를 구하여라.
	조건 :
		Input) 크기 N (1 <= N <= 1,000,000)
		Output) 15746으로 나눈 나머지를 출력
----------------------------------------------------*/

#include <iostream>

using namespace std;

constexpr int MAX = 1000001;
int dp[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	dp[1] = 1;
	dp[2] = 2;

	cin >> N;

	for (int i = 3; i <= N; ++i)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;

	cout << dp[N] << '\n';

	return 0;
}