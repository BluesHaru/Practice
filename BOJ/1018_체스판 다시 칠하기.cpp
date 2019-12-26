/*---------------------------------------------------
	1018 체스판 다시 칠하기
	BF
	문제정보 :	엉망인 체스판을 다시 만들기 위해 칠해야 하는 최소 칸 수를 출력하라.
	조건 :
		Input)	세로 N, 가로 M (8 ≤ N, M ≤ 50)
				둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.
		Output)	첫째 줄에 지민이가 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
using namespace std;

char board[51][51];

int main()
{
	int N, M, result = 64;
	scanf("%d %d", &N, &M);

	int firW, secB;
	int firB, secW;
	firW = firB = secW = secB = 0;

	for (int i = 0; i < N; ++i)
	{
		getchar();
		for (int k = 0; k < M; ++k)
		{
			scanf("%c", &board[i][k]);

		}
	}
	bool isFB = true;

	int cntY = N - 8;
	int cntX = M - 8;
	for (int Y = 0; Y <= cntY; ++Y)
	{
		for(int X = 0; X <= cntX; ++X)
		{
			for (int i = Y; i < 8 + Y; ++i)
			{
				if (0 == i % 2) isFB = true;
				else isFB = false;

				for (int k = X; k < 8 + X; ++k)
				{
					char block = board[i][k];
					if (isFB)
					{
						if (0 == k % 2)
						{
							if ('B' == block) ++firB;
							else ++firW;
						}
						else
						{
							if ('B' == block) ++secB;
							else ++secW;
						}
					}
					else
					{
						if (0 == k % 2)
						{
							if ('B' == block) ++secB;
							else ++secW;

						}
						else
						{
							if ('B' == block) ++firB;
							else ++firW;
						}
					}
				}
			}
			//printf("%d %d\n%d %d\n", firW, secB, firB, secW);
			//printf("합계 : %d %d\n", (32 - firW) + (32 - secB), 64 - firB - secW);
			if (64 - firW - secB < result) result = 64 - firW - secB;
			
			if (64 - firB - secW < result) result = 64 - firB - secW;

			firW = firB = secW = secB = 0;
		}
	}
	printf("%d\n", result);

	return 0;
}