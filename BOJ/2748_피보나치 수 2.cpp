/*---------------------------------------------------
	2748 피보나치 수 2
	수학, 재귀
	문제정보 :	피보나치를 만들어보자
	조건 :
		Input)	첫째 줄에 n이 주어진다. n은 90보다 작거나 같은 자연수이다.
		Output)	첫째 줄에 n번째 피보나치 수를 출력한다.
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