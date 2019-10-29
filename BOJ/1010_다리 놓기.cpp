/*---------------------------------------------------
	1010 다리 놓기
	DP
	문제정보 : 강을 연결하는 겹치지 않게 다리를 연결하는 경우의 수를 구하라.
	조건 :
		Input)	사이트의 개수 N, M (0 < N <= M < 30)
----------------------------------------------------*/

#include <iostream>

using namespace std;
constexpr int MAX = 31;
int N, M;
int bridge[MAX][MAX];
int ans;

void CreateBridge()
{
	for (int i = 1; i < MAX; ++i)
		bridge[1][i] = i;

	for (int i = 2; i < MAX; ++i)
	{
		for (int k = i; k < MAX; ++k)
		{
			if (k == i)
			{
				bridge[i][k] = 1;
				continue;
			}
			for(int m = k - 1; m > 0; --m)
				bridge[i][k] += bridge[i - 1][m];
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	cin >> test_case;

	CreateBridge();
	for (int i = 0; i < test_case; ++i)
	{
		cin >> N >> M;
		cout << bridge[N][M] << '\n';
	}


	return 0;
}