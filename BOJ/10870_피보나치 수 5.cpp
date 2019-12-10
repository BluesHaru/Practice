/*---------------------------------------------------
	10870 �Ǻ���ġ �� 5
	����, ���
	�������� :	�Ǻ���ġ�� ��ͷ� ������
	���� :
		Input)	ù° �ٿ� n�� �־�����. n�� 20���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.
		Output)	ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
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