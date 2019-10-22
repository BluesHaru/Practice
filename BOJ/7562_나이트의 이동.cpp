/*---------------------------------------------------
	7562 ����Ʈ�� �̵�
	BFS
	�������� :	���簢�� �ǿ��� ���� �ּ������� �̵��ϴ� Ƚ�� ���
				(�ڼ��Ѱ� ����Ʈ ����)
	���� :
		Input) ü���� �� ���� ���� I (4 <= I <= 300)
		Output)
----------------------------------------------------*/

#include <iostream>
#include <queue>

using namespace std;

// ü������ �� ��
int I;

// ü������ �̵� ����, �»�, ���, ����, ���� ��
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

		// �»�, ���, ����, ���� ��
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
		// ü������ ũ��
		cin >> I;

		pair<int, int> st, dst;
		cin >> st.first >> st.second;
		cin >> dst.first >> dst.second;
		MoveKnight(st, dst);
	}

	return 0;
}