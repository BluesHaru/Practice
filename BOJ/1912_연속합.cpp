/*---------------------------------------------------
	1912 연속합
	DP
	문제정보 : n개의 정수로 이루어진 임의의 수열에서 연속된 몇 개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하라.
	조건 :
		Input) 개수 n(1 ≤ n ≤ 100,000), 입력 수 k (-1000 <= k <= 1000)
		Output) 가장 큰 합의 수
----------------------------------------------------*/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100001;
int dp[MAX];
int arr[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}
	int answer = dp[0];
	for (int k = 1; k < N; ++k)
	{
		dp[k] = max(dp[k], arr[k] + dp[k - 1]);
		answer = max(dp[k], answer);
	}
	cout << answer << '\n';


	return 0;
}