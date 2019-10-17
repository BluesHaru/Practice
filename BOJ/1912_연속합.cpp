/*---------------------------------------------------
	1912 ������
	DP
	�������� : n���� ������ �̷���� ������ �������� ���ӵ� �� ���� ���� �����ؼ� ���� �� �ִ� �� �� ���� ū ���� ���϶�.
	���� :
		Input) ���� n(1 �� n �� 100,000), �Է� �� k (-1000 <= k <= 1000)
		Output) ���� ū ���� ��
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