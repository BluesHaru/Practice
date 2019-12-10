/*---------------------------------------------------
	2749 �Ǻ���ġ �� 3
	����, ���
	�������� :	�Ǻ���ġ�� ������
	���� :
		Input)	ù° �ٿ� n�� �־�����. n�� 1,000,000,000,000,000,000���� �۰ų� ���� �ڿ����̴�.
		Output)	ù° �ٿ� n��° �Ǻ���ġ ���� 1,000,000���� ���� �������� ����Ѵ�.

		// �ǻ�� �ֱ� : https://www.acmicpc.net/blog/view/28
----------------------------------------------------*/
#include <iostream>

using namespace std;

constexpr int mod = 1000000;
constexpr int p = mod / 10 * 15;

int fib[p] = { 0,1 };

unsigned long long fibonacci(unsigned long long n)
{
	for (unsigned long long i = 2; i < p; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		fib[i] %= mod;
	}

	return fib[n%p];
}

int main()
{
	unsigned long long num;
	scanf_s("%lld", &num);

	printf("%lld", fibonacci(num));

	return 0;
}