/*---------------------------------------------------
	3085 ���� ����
	BF
	�������� :	������ ���� ���� ���� �� ���� �� ������ ã�ƶ�.
	���� :
		Input)	������ ũ�� N (3 <= N <= 50)
				���� ����(C:����, P:�Ķ�, Z:�ʷ�, Y:���)
----------------------------------------------------*/
#pragma warning(disable:4996)

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
	// �¿�
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

	// ����
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
	int answer = 0;
	scanf("%d", &N);

	// ���� �Է�
	for (int i = 0; i < N; ++i)
		scanf("%d", &board[i]);

	int cnt;
	for (int r = 0; r < N; ++r)
	{
		for (int c = 0; c < N - 1; ++c)
		{
			// �¿�
			swap(board[r][c], board[r][c + 1]);
			answer = max(answer, GetCandy());
			swap(board[r][c], board[r][c + 1]);
			// ����
			swap(board[c][r], board[c + 1][r]);
			answer = max(answer, GetCandy());
			swap(board[c][r], board[c + 1][r]);
		}
	}
	printf("%d\n", answer);

	return 0;
}