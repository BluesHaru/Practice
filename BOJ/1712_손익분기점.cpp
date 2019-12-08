/*---------------------------------------------------
	1712 손익분기점
	수학
	문제정보 :	손익분기점을 구하라.
	조건 :
		Input)	고정비용 A, 가변비용 B, 노트북 가격 C (모두 21억 이하의 자연수)
		Output)	손익분기점을 넘을 시의 노트북 대수를 출력하라.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	long long A, B, C;
	scanf_s("%lld %lld %lld", &A, &B, &C);
	long long cnt = 0;
	
	cnt = C - B;
	if (cnt <= 0) cnt = -1;
	else cnt = A / cnt + 1;

	printf("%lld\n", cnt);
	return 0;
}