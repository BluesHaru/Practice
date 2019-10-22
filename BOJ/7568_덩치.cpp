/*---------------------------------------------------
	7568 덩치
	BF
	문제정보 :	가장 큰 덩치 순으로 등수를 매겨라
	조건 :
		Input) 사람 수 N ( 2 <= N <= 50 ), 키와 몸무게 x,y ( 10 <= x,y <= 200 )
		Output)
----------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Bigger(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first < b.first && a.second < b.second)
		return true;

	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;

	vector<pair<int, int>> arr(N);
	vector<int> ans(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i].first;
		cin >> arr[i].second;
	}

	for (int i = 0; i < N; ++i)
	{
		int answer = 0;
		for (int k = 0; k < N; ++k)
		{
			if (i != k)
			{
				if (Bigger(arr[i], arr[k]))
					++answer;
			}
		}
		ans[i] = ++answer;
	}

	for (auto a : ans)
		cout << a << ' ';

	return 0;
}