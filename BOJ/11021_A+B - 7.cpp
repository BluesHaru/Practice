/*---------------------------------------------------
	11021 A+B - 7
	�ܼ� ��� (for ��)
	�������� : ���� ������ �϶�.
	���� :
		Input) �׽�Ʈ���̽� ���� T (T �� 1,000,000), �� �� A, B (0 < A, B < 10)
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
		printf("Case #%d: %d\n", i + 1, A + B);
	}

	return 0;
}
