/*---------------------------------------------------
	1330 �� �� ���ϱ�
	�ܼ� ���
	�������� : �� �� ��
	���� :
		Input) �� �� A, B (-10,000 �� A, B �� 10,000)
		Output) �ε�ȣ�� ���
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	// VS���� _s�� �ִ´�.
	scanf_s("%d %d", &A, &B);
	//scanf("%d %d", &A, &B);

	if (A < B) printf("%c", '<');
	else if(A > B) printf("%c", '<');
	else printf("%s", "==");

	return 0;
}