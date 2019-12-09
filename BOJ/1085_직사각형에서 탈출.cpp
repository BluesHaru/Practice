/*---------------------------------------------------
	1085 직사각형에서 탈출
	수학, 구현
	문제정보 :	한수는 지금 (x, y)에 있다. 직사각형의 왼쪽 아래 꼭짓점은 (0, 0)에 있고, 
				오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
	조건 :
		Input)	자연수 x y w h (w, h ≤ 1,000) (1 ≤ x ≤ w-1) (1 ≤ y ≤ h-1)
		Output)
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	
	int result = x;

	if (result > y) result = y;
	if (result > w - x) result = w - x;
	if (result > h - y) result = h - y;
	
	printf("%d", result);

	return 0;
}