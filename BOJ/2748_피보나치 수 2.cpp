/*---------------------------------------------------
	2748 �Ǻ���ġ �� 2
	����, ���
	�������� :	�Ǻ���ġ�� ������
	���� :
		Input)	ù° �ٿ� n�� �־�����. n�� 90���� �۰ų� ���� �ڿ����̴�.
		Output)	ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>

using namespace std;

unsigned long long fib[91];

unsigned long long fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (fib[n] != 0)
		return fib[n];

	return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	fib[1] = 1; fib[2] = 1;
	int num;
	scanf_s("%d", &num);

	printf("%lld", fibonacci(num));

	return 0;
}