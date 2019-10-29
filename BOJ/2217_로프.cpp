/*---------------------------------------------------
	2217 ����
	�׸��� 
	�������� : ������ �� �� �ִ� �ִ� �߷��� ���϶�
	���� :
		Input) ������ ���� N(1 <= N <= 100,000), ������ �߷� K (1 <= K <= 10,000)
----------------------------------------------------*/

#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;

array<int, 100000> arr;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, rope;
	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.begin() + N, greater<int>());

	long long ans = 0;	
	
	for (int i = 1; i <= N; ++i)
	{
		long long total = arr[i-1] * i;
		if (total > ans)
			ans = total;
	}

	cout << ans << '\n';

	return 0;
}