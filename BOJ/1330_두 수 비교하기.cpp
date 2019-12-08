/*---------------------------------------------------
	1330 두 수 비교하기
	단순 계산
	문제정보 : 두 수 비교
	조건 :
		Input) 두 수 A, B (-10,000 ≤ A, B ≤ 10,000)
		Output) 부등호로 출력
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	// VS에선 _s를 넣는다.
	scanf_s("%d %d", &A, &B);
	//scanf("%d %d", &A, &B);

	if (A < B) printf("%c", '<');
	else if(A > B) printf("%c", '<');
	else printf("%s", "==");

	return 0;
}