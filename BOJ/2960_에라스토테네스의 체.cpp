/*---------------------------------------------------
	2960 에라스토테네스의 체
	에라스토테네스의 체, 구현
	문제정보 :	에라토스테네스의 체는 N보다 작거나 같은 모든 소수를 찾는 유명한 알고리즘이다.
				N, K가 주어졌을 때, K번째 지우는 수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	N과 K (1 ≤ K < N, max(2, K) < N ≤ 1000)
		Output)	첫째 줄에 K번째 지워진 수를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>

using namespace std;

int arr[1001];

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);

	int curNum = 2;

	for (int i = 2; i <= N; ++i)
	{
		for (int m = i; m <= N; m += i)
		{
			if (0 == arr[m])
			{
				arr[m] = 1;
				curNum = m;
				if (--K == 0)
				{
					printf("%d\n", curNum);
					return 0;
				}
			}
		}
		
	}
	printf("%d\n", curNum);

	return 0;
}