/*---------------------------------------------------
	2798 블랙잭
	BF, (구현, 배열, 반복문)
	문제정보 :	N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.
	조건 :
		Input)	첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다. 
				둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는다.
				합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.
		Output)	첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.
----------------------------------------------------*/
#include <iostream>

using namespace std;

int cards[101];

int main()
{
	int N, M;
	scanf_s("%d %d", &N, &M);
	
	// 카드 수 입력
	for (int i = 0; i < N; ++i)
		scanf_s("%d", &cards[i]);

	int result = 0;

	for (int f = 0; f < N - 2; ++f)
	{
		for (int s = f + 1; s < N - 1; ++s)
		{
			for (int th = s + 1; th < N; ++th)
			{
				int tmpR = cards[f] + cards[s] + cards[th];
				if (tmpR <= M && M - (tmpR) <= M - result)
					result = tmpR;
			}
		}
	}
	printf("%d\n", result);

	return 0;
}