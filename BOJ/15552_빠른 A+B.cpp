/*---------------------------------------------------
	15552 ���� A+B
	�ܼ� ��� (for ��)
	�������� : ���� ������ �϶�.
	���� :
		Input) �׽�Ʈ���̽� ���� T (T �� 1,000,000), �� �� A, B (1 �� A, B �� 1,000)
		Output) 
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int T, A, B;
	// VS���� _s�� �ִ´�.
	scanf_s("%d", &T);

	for (int i = 0; i < T; ++i)
	{
		// VS���� _s�� �ִ´�.
		scanf_s("%d %d", &A, &B);
		//scanf("%d", &A);
		printf("%d\n", A+B);
	}

	return 0;
}
