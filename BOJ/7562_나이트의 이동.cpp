/*---------------------------------------------------
	7562 나이트의 이동
	BFS
	문제정보 :	정사각형 판에서 말을 최소한으로 이동하는 횟수 출력
				(자세한건 사이트 참고)
	조건 :
		Input) 체스판 한 변의 길이 I (4 <= I <= 300)
		Output)
----------------------------------------------------*/

#include <iostream>
#include <queue>

using namespace std;

// 체스판의 한 변
int I;

// 체스판의 이동 범위, 좌상, 우상, 좌하, 우하 순
int mr[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int mc[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };

void MoveKnight(const pair<int, int> &st, const pair<int, int> &dst)
{
	if (st == dst)
	{
		cout << 0 << '\n';
		return;
	}

	vector<vector<int>> board(I, vector<int>(I));

	queue<pair<int, int>> q;

	q.push(st);

	pair<int, int> curPos;
	board[st.first][st.second] = 1;
	while (!q.empty())
	{
		curPos = q.front();
		q.pop();

		// 좌상, 우상, 좌하, 우하 순
		for (int i = 0; i < 8; ++i)
		{
			int nextR = curPos.first + mr[i];
			int nextC = curPos.second + mc[i];
			if ((0 <= nextR && nextR < I) && (0 <= nextC && nextC < I))
			{
				if (0 == board[nextR][nextC] || board[nextR][nextC] > board[curPos.first][curPos.second] + 1)
				{
					board[nextR][nextC] = board[curPos.first][curPos.second] + 1;
					q.emplace(nextR, nextC);
				}
			}
		}
	}
	cout << board[dst.first][dst.second] - 1 << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; ++i)
	{
		// 체스판의 크기
		cin >> I;

		pair<int, int> st, dst;
		cin >> st.first >> st.second;
		cin >> dst.first >> dst.second;
		MoveKnight(st, dst);
	}

	return 0;
}