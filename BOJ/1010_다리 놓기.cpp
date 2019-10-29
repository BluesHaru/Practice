/*---------------------------------------------------
	1010 �ٸ� ����
	DP
	�������� : ���� �����ϴ� ��ġ�� �ʰ� �ٸ��� �����ϴ� ����� ���� ���϶�.
	���� :
		Input)	����Ʈ�� ���� N, M (0 < N <= M < 30)
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