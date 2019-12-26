/*---------------------------------------------------
	1018 ü���� �ٽ� ĥ�ϱ�
	BF
	�������� :	������ ü������ �ٽ� ����� ���� ĥ�ؾ� �ϴ� �ּ� ĭ ���� ����϶�.
	���� :
		Input)	���� N, ���� M (8 �� N, M �� 50)
				��° �ٺ��� N���� �ٿ��� ������ �� ���� ���°� �־�����. B�� �������̸�, W�� ����̴�.
		Output)	ù° �ٿ� �����̰� �ٽ� ĥ�ؾ� �ϴ� ���簢�� ������ �ּڰ��� ����Ѵ�.
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
			//printf("�հ� : %d %d\n", (32 - firW) + (32 - secB), 64 - firB - secW);
			if (64 - firW - secB < result) result = 64 - firW - secB;
			
			if (64 - firB - secW < result) result = 64 - firB - secW;

			firW = firB = secW = secB = 0;
		}
	}
	printf("%d\n", result);

	return 0;
}