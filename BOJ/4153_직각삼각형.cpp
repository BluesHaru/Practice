/*---------------------------------------------------
	4153 직각삼각형
	수학
	문제정보 :	직각 삼각형이 되는지 찾아라
	조건 :
		Input)	세 변의 값이 0 0 0 이 되기 전까지 확인, (각 변은 30,000 미만)
		Output)
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int num;
	while(1)
	{ 
		int min = 30000, mid = 0, max = 0;
		
		for (int i = 0; i < 3; ++i)
		{
			scanf_s("%d", &num);
			if (min > num) min = num;
			if (max < num) max = num;

			mid += num;
		}
		mid -= (min + max);

		if (0 == min && 0 == mid && 0 == max)
			return 0;

		if (min * min + mid * mid == max * max) printf("right\n");
		else printf("wrong\n");
	}


	return 0;
}