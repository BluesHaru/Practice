/*---------------------------------------------------
	11021 A+B - 7
	단순 계산 (for 문)
	문제정보 : 여러 덧셈을 하라.
	조건 :
		Input) 테스트케이스 개수 T (T ≤ 1,000,000), 두 수 A, B (0 < A, B < 10)
		Output)
----------------------------------------------------*/
	
//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int T, A, B;
	// VS에선 _s를 넣는다.
	scanf_s("%d", &T);

	for (int i = 0; i < T; ++i)
	{
		// VS에선 _s를 넣는다.
		scanf_s("%d %d", &A, &B);
		//scanf("%d", &A);
		printf("Case #%d: %d\n", i + 1, A + B);
	}

	return 0;
}
