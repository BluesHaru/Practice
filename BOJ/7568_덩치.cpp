/*---------------------------------------------------
	7568 ��ġ
	BF
	�������� :	���� ū ��ġ ������ ����� �Űܶ�
	���� :
		Input) ��� �� N ( 2 <= N <= 50 ), Ű�� ������ x,y ( 10 <= x,y <= 200 )
----------------------------------------------------*/
#pragma warning(disable:4996)

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
	int N;
	scanf("%d", &N);

	vector<pair<int, int>> arr(N);
	vector<int> ans(N);
	for (int i = 0; i < N; ++i)
		scanf("%d %d", &arr[i].first, &arr[i].second);

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
		printf("%d ", a);

	return 0;
}