/*---------------------------------------------------
	1015 ���� ����
	����
	�������� : 
	���� :
		Input)	�迭 A�� ũ�� N (1 <= N <= 50), ���� K (1 <= K <= 1,000)
		Output)
----------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	pair<int, int> arr[50];
	vector<int> ans(N);

	for (int i = 0; i < N; ++i)
	{
		cin >>arr[i].first;
		arr[i].second = i;
	}
	sort(arr, arr + N);

	for (int k = 0; k < N; ++k)
		ans[arr[k].second] = k;
	
	for (auto num : ans)
		cout << num << ' ';
	cout << '\n';

	return 0;
}