/*---------------------------------------------------
	2846 오르막길
	문제유형
	문제정보 :	가장 큰 오르막길을 구하는 프로그램을 작성하시오.
	조건 :	
		Input)	수열의 크기인 N(1 ≤ N ≤ 1000), N개의 양의 정수 Pi(1 ≤ Pi ≤ 1000)
		Output)	가장 큰 오르막길의 크기를 출력한다. 만약 오르막길이 없는 경우에는 0을 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int main()
{
	int N, Pi, ans = 0, stNum = 0, curNum = 0;

	scanf("%d", &N);

	scanf("%d", &Pi);
	stNum = Pi;
	int tmpAns = 0;
	for (int i = 1; i < N; ++i)
	{
		scanf("%d", &Pi);
		if (curNum >= Pi)
		{
			tmpAns = curNum - stNum;
			if (tmpAns > ans) ans = tmpAns;
			stNum = Pi;
			curNum = Pi;
		}
		else
			curNum = Pi;
	}
	tmpAns = curNum - stNum;
	if (tmpAns > ans) ans = tmpAns;

	printf("%d\n", ans);
	return 0;
}