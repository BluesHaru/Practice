/*---------------------------------------------------
	3085 사탕 게임
	BF
	문제정보 : 사탕을 가장 많이 먹을 수 있을 때 갯수를 찾아라.
	조건 :
		Input)	보드의 크기 N (3 <= N <= 50)
				사탕 종류(C:빨강, P:파랑, Z:초록, Y:노랑)
		Output)
----------------------------------------------------*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

constexpr int MAX = 50;

int N;
string board[MAX];


int GetCandy()
{
	int answer = 0;
	// 좌우
	for (int r = 0; r < N; ++r)
	{
		int temp = 1;
		for (int c = 1; c < N; ++c)
		{
			if (board[r][c - 1] == board[r][c])
				++temp;
			else
			{
				answer = max(answer, temp);
				temp = 1;
			}
		}
		answer = max(answer, temp);
	}

	// 상하
	for (int c = 0; c < N; ++c)
	{
		int temp = 1;
		for (int r = 1; r < N; ++r)
		{
			if (board[r - 1][c] == board[r][c])
				++temp;
			else
			{
				answer = max(answer, temp);
				temp = 1;
			}
		}
		answer = max(answer, temp);
	}
	return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	cin >> N;

	// 보드 입력
	for (int i = 0; i < N; ++i)
		cin >> board[i];

	int cnt;
	for (int r = 0; r < N; ++r)
	{
		for (int c = 0; c < N - 1; ++c)
		{
			// 좌우
			swap(board[r][c], board[r][c + 1]);
			answer = max(answer, GetCandy());
			swap(board[r][c], board[r][c + 1]);
			// 상하
			swap(board[c][r], board[c + 1][r]);
			answer = max(answer, GetCandy());
			swap(board[c][r], board[c + 1][r]);
		}
	}

	cout << answer << '\n';

	return 0;
}