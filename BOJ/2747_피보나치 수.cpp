/*---------------------------------------------------
	2747 �Ǻ���ġ ��
	����, ���
	�������� :	�Ǻ���ġ�� ������
	���� :
		Input)	ù° �ٿ� n�� �־�����. n�� 45���� �۰ų� ���� �ڿ����̴�.
		Output)	ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int fib[46];

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