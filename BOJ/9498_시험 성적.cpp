/*---------------------------------------------------
	9498 ���� ����
	�ܼ� ��� (if ��)
	�������� : �� ������ �Է¹޾� 90 ~100���� A, 80 ~89���� B, 70 ~79���� C, 60 ~69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input) �������� A (-0 �� A �� 100)
		Output) ��� ���
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int A;
	// VS���� _s�� �ִ´�.
	scanf_s("%d", &A);
	//scanf("%d", &A);

	if (A >= 90) printf("%c", 'A');
	else if (A >= 80) printf("%c", 'B');
	else if (A >= 70) printf("%c", 'C');
	else if (A >= 60) printf("%c", 'D');
	else printf("%c", 'F');
	
	return 0;
}
