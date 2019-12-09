/*---------------------------------------------------
	2581 �Ҽ�
	����, ����
	�������� :	�� �� ������ �Ҽ����� �հ� ���� ���� �Ҽ��� ����϶�
	���� :
		Input) �ڿ��� A, B (A,B �� 10,000)
		Output)	M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.
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