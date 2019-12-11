/*---------------------------------------------------
	9020 골드바흐의 추측
	수학, 구현
	문제정보 :	2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하시오. 
				만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.
	조건 :
		Input)	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
				각 테스트 케이스는 한 줄로 이루어져 있고 짝수 n이 주어진다. (4 ≤ n ≤ 10,000)
		Output)	각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다. 출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.
----------------------------------------------------*/

const int MAX = 10001;
int arr[MAX];

void erasto()
{
	arr[0] = 1; arr[1] = 1;
	for (int i = 2; i * i < MAX; ++i)
	{
		if (!arr[i])
		{
			for (int k = i * i; k < MAX; k += i)
				arr[k] = 1;
		}
	}
}
#include <iostream>

using namespace std;

int main()
{
	erasto();

	int T;
	scanf_s("%d", &T);

	int num;
	while (T--)
	{
		scanf_s("%d", &num);
		
		if (4 == num)
		{
			printf("2 2\n");
			continue;
		}

		// 홀수인 소수들의 합
		int firNum = 0, secNum = 0;
		for (int i = 3; i <= num; ++i)
		{
			int minusNum = num - i;
			if (i > minusNum) continue;
			if (0 == arr[i] && 0 == arr[minusNum])
			{
				firNum = i;
				secNum = minusNum;
			}
		}
		printf("%d %d\n", firNum, secNum);
	}

	return 0;
}