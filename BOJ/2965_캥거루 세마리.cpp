/*---------------------------------------------------
	2965 캥거루 3마리
	수학
	문제정보 :	캥거루 세 마리가 사막에서 놀고 있다. 사막에는 수직선이 하나 있고, 캥거루는 서로 다른 한 좌표 위에 있다.
				한 번 움직일 때, 바깥쪽의 두 캥거루 중 한 마리가 다른 두 캥거루 사이의 정수 좌표로 점프한다. 한 좌표 위에 있는 캥거루가 두 마리 이상일 수는 없다.
				캥거루는 최대 몇 번 움직일 수 있을까?
	조건 :
		Input)	세 캥거루의 초기 위치 A, B, C가 주어진다. (0 < A < B < C < 100)
		Output)	캥거루가 최대 몇 번 움직일 수 있는지 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;


int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (B - A < C - B)
		printf("%d\n", C - B - 1);
	else
		printf("%d\n", B - A - 1);
	return 0;
}