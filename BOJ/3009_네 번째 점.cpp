/*---------------------------------------------------
	3009 네 번째 점
	수학, 구현
	문제정보 :	세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.
	조건 :
		Input)	좌표들 (1 ≤ x ≤ 1,000)
		Output)	직사각형의 네 번째 점의 좌표를 출력한다.
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; ++i)
		scanf_s("%d %d", &x[i], &y[i]);

	int resultX = x[0] == x[1] ? x[2] : x[1] == x[2] ? x[0] : x[1];
	int resultY = y[0] == y[1] ? y[2] : y[1] == y[2] ? y[0] : y[1];

	printf("%d %d\n", resultX, resultY);

	return 0;
}