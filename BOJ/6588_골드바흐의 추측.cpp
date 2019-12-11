/*---------------------------------------------------
	6588 골드바흐의 추측
	수학, 구현
	문제정보 :	백만 이하의 모든 짝수에 대해서, 이 추측을 검증하는 프로그램을 작성하시오.
	조건 :
		Input)	테스트 케이스 T ( T < 100,000), 짝수 정수 n (6 ≤ n ≤ 1000000)
				입력의 마지막 줄에는 0이 하나 주어진다.
		Output)	각 테스트 케이스에 대해서, n = a + b 형태로 출력한다. 이때, a와 b는 홀수 소수이다. 숫자와 연산자는 공백 하나로 구분되어져 있다. 
				만약, n을 만들 수 있는 방법이 여러 가지라면, b-a가 가장 큰 것을 출력한다. 
				또, 두 홀수 소수의 합으로 n을 나타낼 수 없는 경우에는 "Goldbach's conjecture is wrong."을 출력한다.
----------------------------------------------------*/
#include <iostream>

using namespace std;

const int MAX = 1000001;
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

int main()
{
	erasto();

	int num;
	while (1)
	{
		scanf_s("%d", &num);

		if (0 == num) return 0;

		int cmp = num >> 1;

		// 홀수인 소수들의 합
		int firNum = 0, secNum = 0;
		for (int i = 2; i <= cmp; ++i)
		{
			int minusNum = num - i;
			if (i > minusNum) continue;
			if (0 == arr[i] && 0 == arr[minusNum])
			{
				firNum = i;
				secNum = minusNum;
				break;
			}
		}
		if (0 == firNum && 0 == secNum)
			printf("Goldbach's conjecture is wrong.");
		else
			printf("%d = %d + %d\n", num, firNum, secNum);
	}

	return 0;
}