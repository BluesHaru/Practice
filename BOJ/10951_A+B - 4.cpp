/*---------------------------------------------------
	10951 A+B - 4
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

	// VS���� _s�� �ִ´�.
	while (scanf_s("%d %d", &A, &B)!=EOF)
		printf("%d\n", A + B);

	return 0;
}
