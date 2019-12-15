/*---------------------------------------------------
	1075 나누기
	수학
	문제정보 :	정수 N의 가장 뒤 두 자리를 적절히 바꿔서 N을 F로 나누어 떨어지게 만들려고 한다.
				뒤 두 자리를 가능하면 작게 만들려고 한다.
	조건 :
		Input)	N (100 ≤ N ≤ 2,000,000,000) F (F ≤ 는 100)
		Output)
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int main()
{
	int N, F, ans = 0;
	scanf("%d %d", &N, &F);

	int curNum = N / 100 * 100;
	
	for (; ans < 100; ++ans)
	{
		if (0 == (curNum + ans) % F)
			break;
	}

	if(ans < 10) printf("0");
	printf("%d\n", ans);
	return 0;
}