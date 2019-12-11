/*---------------------------------------------------
	10951 A+B - 4
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

	// VS에선 _s를 넣는다.
	while (scanf_s("%d %d", &A, &B)!=EOF)
		printf("%d\n", A + B);

	return 0;
}
