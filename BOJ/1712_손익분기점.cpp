/*---------------------------------------------------
	1712 ���ͺб���
	����
	�������� :	���ͺб����� ���϶�.
	���� :
		Input)	������� A, ������� B, ��Ʈ�� ���� C (��� 21�� ������ �ڿ���)
		Output)	���ͺб����� ���� ���� ��Ʈ�� ����� ����϶�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	long long A, B, C;
	scanf_s("%lld %lld %lld", &A, &B, &C);
	long long cnt = 0;
	
	cnt = C - B;
	if (cnt <= 0) cnt = -1;
	else cnt = A / cnt + 1;

	printf("%lld\n", cnt);
	return 0;
}