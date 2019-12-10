/*---------------------------------------------------
	10870 피보나치 수 5
	수학, 재귀
	문제정보 :	피보나치를 재귀로 만들어보자
	조건 :
		Input)	첫째 줄에 n이 주어진다. n은 20보다 작거나 같은 자연수 또는 0이다.
		Output)	첫째 줄에 n번째 피보나치 수를 출력한다.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int fib[21];

int fibonacci(int n)
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

	printf("%d", fibonacci(num));

	return 0;
}