/*---------------------------------------------------
	1904 01Ÿ��
	DP
	�������� : 00Ÿ�ϰ� 1Ÿ�Ϸ� ����� 2�� ������ ������ ���Ͽ���.
	���� :
		Input) ũ�� N (1 <= N <= 1,000,000)
		Output) 15746���� ���� �������� ���
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