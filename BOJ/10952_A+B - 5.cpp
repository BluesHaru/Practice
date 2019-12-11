/*---------------------------------------------------
	10952 A+B - 5
	단순 계산 (while 문)
	문제정보 : 여러 덧셈을 하라.
	조건 :
		Input) 두 수 A, B (0 < A, B < 10)
		Output)
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	while (1)
	{
		// VS에선 _s를 넣는다.
		scanf_s("%d %d", &A, &B);
		if (A == 0 && B == 0) break;
		printf("%d\n", A + B);
	}

	return 0;
}
