/*---------------------------------------------------
	10807 개수 세기
	배열
	문제정보 :	총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 
				셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
		Output)	첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <stdio.h>

using namespace std;

int arr[201];
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		int idx;
		scanf("%d", &idx);
		++arr[idx + 100];
	}
	int findIdx;
	scanf("%d", &findIdx);
	printf("%d\n", arr[findIdx + 100]);

	return 0;
}