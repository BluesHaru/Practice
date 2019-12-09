/*---------------------------------------------------
	9498 시험 성적
	단순 계산 (if 문)
	문제정보 : 험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
	조건 :
		Input) 시험점수 A (-0 ≤ A ≤ 100)
		Output) 등급 출력
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int A;
	// VS에선 _s를 넣는다.
	scanf_s("%d", &A);
	//scanf("%d", &A);

	if (A >= 90) printf("%c", 'A');
	else if (A >= 80) printf("%c", 'B');
	else if (A >= 70) printf("%c", 'C');
	else if (A >= 60) printf("%c", 'D');
	else printf("%c", 'F');
	
	return 0;
}
