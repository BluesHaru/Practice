/*---------------------------------------------------
	10952 A+B - 5
	�ܼ� ��� (while ��)
	�������� : ���� ������ �϶�.
	���� :
		Input) �� �� A, B (0 < A, B < 10)
		Output)
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	while (1)
	{
		// VS���� _s�� �ִ´�.
		scanf_s("%d %d", &A, &B);
		if (A == 0 && B == 0) break;
		printf("%d\n", A + B);
	}

	return 0;
}
