/*---------------------------------------------------
	2953 나는 요리사다
	배열
	문제정보 :	각 참가자가 얻은 평가 점수가 주어졌을 때, 우승자와 그의 점수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫 번째 참가자부터 다섯 번째 참가자까지 순서대로 주어진다. 항상 우승자가 유일한 경우만 입력으로 주어진다.
		Output)	첫째 줄에 우승자의 번호와 그가 얻은 점수를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int arr[4];

int main()
{
	int winnerNum = 0;
	int point = 0;

	for (int i = 0; i < 5; ++i)
	{
		int total = 0;
		scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);
		total = arr[0] + arr[1] + arr[2] + arr[3];
		if (point < total)
		{
			winnerNum = i + 1;
			point = total;
		}
	}
	printf("%d %d\n", winnerNum, point);
	return 0;
}