/*---------------------------------------------------
	2178 �̷� Ž��
	BFS
	�������� :	(1, 1)���� ����Ͽ� (N, M)�� ��ġ�� �̵��� �� ������ �ϴ� �ּ��� ĭ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
				�� ĭ���� �ٸ� ĭ���� �̵��� ��, ���� ������ ĭ���θ� �̵��� �� �ִ�.
	���� :
		Input)	ù° �ٿ� �� ���� N, M(2 �� N, M �� 100)�� �־�����. 
				���� N���� �ٿ��� M���� ������ �̷ΰ� �־�����. ������ ������ �پ �Է����� �־�����.
		Output)	ù° �ٿ� ������ �ϴ� �ּ��� ĭ ���� ����Ѵ�. �׻� ������ġ�� �̵��� �� �ִ� ��츸 �Է����� �־�����.
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

int mvPos[8] = { -1, 0, 1, 0, 0, -1, 0, 1 }; // ��, ��, ��, ��

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