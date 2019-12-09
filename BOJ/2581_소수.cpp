/*---------------------------------------------------
	2581 소수
	수학, 구현
	문제정보 :	두 수 사이의 소수들의 합과 가장 작은 소수를 출력하라
	조건 :
		Input) 자연수 A, B (A,B ≤ 10,000)
		Output)	M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.
----------------------------------------------------*/
#include <iostream>

using namespace std;

bool Prime[10001];

void PrimeNumber()
{
	for (int i = 2; i < 10001; ++i)
	{
		if (!Prime[i])
		{
			for (int k = i * i; k < 10001; k += i)
				Prime[k] = true;
		}
	}
}

int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);

	Prime[1] = true;
	PrimeNumber();

	int firPrime = 0;
	int total = 0;
	for (int i = A; i <= B; ++i)
	{
		if (false == Prime[i])
		{
			if (0 == firPrime) firPrime = i;
			total += i;
		}
	}
	if (0 == total) { printf("%d", -1); return 0; }

	printf("%d\n%d\n", total, firPrime);
	return 0;
}