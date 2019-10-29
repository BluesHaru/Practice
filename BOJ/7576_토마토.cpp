/*---------------------------------------------------
	7576 �丶��
	BFS
	�������� :	��� �丶�䰡 ���� ���� �ּ� �ϼ��� ���϶�.
				1�� ���� �丶��, 0�� ���� ���� �丶��, -1�� �丶�䰡 ������� ���� ĭ 
	���� :
		Input)	M�� ������ ���� ĭ�� ��, N�� ������ ���� ĭ�� �� (2 <= M,N <= 1,000)
		Output) ����� ������ ��� �丶�䰡 �;��ִ� �����̸� 0�� ���, �丶�䰡 ��� ������ ���ϴ� ��Ȳ�̸� -1
----------------------------------------------------*/

#include <iostream>
#include <queue>

using namespace std;

// �����¿�
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