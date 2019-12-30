/*---------------------------------------------------
	2178 미로 탐색
	BFS
	문제정보 :	(1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오. 
				한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.
	조건 :
		Input)	첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 
				다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 붙어서 입력으로 주어진다.
		Output)	첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.
----------------------------------------------------*/
#include <iostream>
#include <vector>
#include <string>

#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 1001;
int maxX, maxY;
int visit[MAX][MAX];

int mvPos[8] = { -1, 0, 1, 0, 0, -1, 0, 1 }; // 상, 하, 좌, 우

bool isRange(int y, int x)
{
	return ((y >= 0 && y < maxY) && (x >= 0 && x < maxX));
}

int solution(vector<vector<int>> board)
{
	int answer = 0;

	queue<vector<int>> q;

	int tX = maxX - 1, tY = maxY - 1;
	
	vector<int> cur = { 0,0 };

	visit[0][0] = 1;

	q.push(cur);

	vector<int> next(2,0);

	while (!q.empty())
	{
		cur = q.front();
		q.pop();

		if (cur[0] == tY && cur[1] == tX)
			break;

		for (int i = 0; i < 8; i += 2)
		{
			next[0] = cur[0] + mvPos[i];
			next[1] = cur[1] + mvPos[i + 1];
			if (!isRange(next[0], next[1])) continue;

			if (board[next[0]][next[1]] == 1 && visit[next[0]][next[1]] == 0)
			{
				visit[next[0]][next[1]] = visit[cur[0]][cur[1]] + 1;
				q.push(next);
			}
		}
	}
	answer = visit[tY][tX];

	return answer;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> maxY >> maxX;

	vector<vector<int>> board(maxY, vector<int>(maxX));

	for (int i = 0; i < maxY; ++i)
	{
		string temp;
		cin >> temp;
		
		int sLen = temp.length();

		for (int k = 0; k < sLen; ++k)
			board[i][k] = temp[k] - '0';
	}

	cout << solution(board) << '\n';

	return 0;
}