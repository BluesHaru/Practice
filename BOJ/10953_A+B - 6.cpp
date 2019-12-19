/*---------------------------------------------------
	10953 A+B - 6
	수학
	문제정보 : 여러 덧셈을 하라.
	조건 :
		Input) A와 B는 콤마(,)로 구분되어 있다. 두 수 A, B (0 < A, B < 10)
		Output)
----------------------------------------------------*/
#pragma warning(disable:4996)
//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int T;
	char text[4];
	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%s", text);
		printf("%d\n", text[0] - '0' + text[2] - '0');
	}
	return 0;
}
