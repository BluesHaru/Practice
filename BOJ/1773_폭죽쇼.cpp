
/*---------------------------------------------------
	1773 폭죽쇼
	배열, 구현
	문제정보 :	폭죽쇼가 끝날 때까지 얼마나 많은 시간동안 밤하늘에 폭죽이 터지는 것을 볼 수 있는지 궁금해 하는 조교를 도와주자.
	조건 :
		Input)	폭죽을 터뜨리는 학생의 수 N (1 ≤ N ≤ 100), 폭죽쇼가 끝나는 시간 C (1 ≤ C ≤ 2,000,000)
				학생들이 폭죽을 터뜨리는 주기 P (1 ≤ P ≤ C)
		Output)	폭죽쇼가 시작되고 끝날 때까지 밤하늘에 폭죽을 볼 수 있는 총 시간을 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;
bool tArr[2000001];

int main()
{
	int N, C, P, ans = 0;
	scanf("%d %d", &N, &C);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &P);
		int time = 0;
		for (int k = P; k <= C; k += P)
		{
			if (!tArr[k])
			{
				tArr[k] = true;
				++time;
			}
		}
		ans += time;
	}
	
	printf("%d\n", ans);
	return 0;
}