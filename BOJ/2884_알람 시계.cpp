/*---------------------------------------------------
	2884 알람 시계
	단순 계산 (if 문)
	문제정보 : 45분 앞선 시간을 구하라
	조건 :
		Input) 두 정수 H와 M (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)
		Output) 24 시간 표현으로 시간 표현.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int H, M;
	// VS에선 _s를 넣는다.
	scanf_s("%d %d", &H, &M);
	//scanf("%d", &A);

	if (M < 45)
	{
		--H;
		M += 60;
	}
	M -= 45;

	if (H < 0)
		H += 24;

	printf("%d %d", H, M);

	return 0;
}
