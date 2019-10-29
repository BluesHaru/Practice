/*---------------------------------------------------
	7576 토마토
	BFS
	문제정보 :	모든 토마토가 익을 때의 최소 일수를 구하라.
				1은 익은 토마토, 0은 익지 않은 토마토, -1은 토마토가 들어있지 않은 칸 
	조건 :
		Input)	M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수 (2 <= M,N <= 1,000)
		Output) 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력, 토마토가 모두 익지는 못하는 상황이면 -1
----------------------------------------------------*/

#include <iostream>
#include <queue>

using namespace std;

// 상하좌우
int pr[4] = { -1, 1, 0, 0 };
int pc[4] = { 0, 0, -1, 1 };

constexpr int MAX = 1001;
int M, N;

int tmt = 0;

int board[MAX][MAX];

void bfs(queue<pair<int, int>> q)
{
	int answer = 0;

	int curR, curC, nextR, nextC;
	int cnt = q.size(), nextCnt = 0;
	while (!q.empty())
	{
		--cnt;
		curR = q.front().first;
		curC = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			nextR = curR + pr[i];
			nextC = curC + pc[i];
			if ((nextR >= 0 && nextR < N) && (nextC >= 0 && nextC < M) && 0 == board[nextR][nextC])
			{
				--tmt;
				board[nextR][nextC] = 1;
				q.emplace(nextR, nextC);
				++nextCnt;
			}
		}
		if (0 == tmt)
		{
			++answer;
			break;
		}
		if (0 == cnt)
		{
			++answer;
			cnt = nextCnt;
			nextCnt = 0;
		}
	}
	if (0 == tmt)
		cout << answer << '\n';
	else
		cout << -1 << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> M >> N;
	queue<pair<int, int>> q;

	for (int r = 0; r < N; ++r)
		for (int c = 0; c < M; ++c)
		{
			cin >> board[r][c];
			if (1 == board[r][c])
				q.emplace(r, c);
			else if (0 == board[r][c])
				++tmt;
		}	

	if (0 != tmt)
		bfs(q);
	else
		cout << 0 << '\n';

	return 0;
}