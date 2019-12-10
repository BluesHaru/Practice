/*---------------------------------------------------
	2749 피보나치 수 3
	수학, 재귀
	문제정보 :	피보나치를 만들어보자
	조건 :
		Input)	첫째 줄에 n이 주어진다. n은 1,000,000,000,000,000,000보다 작거나 같은 자연수이다.
		Output)	첫째 줄에 n번째 피보나치 수를 1,000,000으로 나눈 나머지를 출력한다.

		// 피사노 주기 : https://www.acmicpc.net/blog/view/28
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