/*---------------------------------------------------
	10953 A+B - 6
	����
	�������� : ���� ������ �϶�.
	���� :
		Input) A�� B�� �޸�(,)�� ���еǾ� �ִ�. �� �� A, B (0 < A, B < 10)
		Output)
----------------------------------------------------*/
#pragma warning(disable:4996)
//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int T;
	char text[4];
	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%s", text);
		printf("%d\n", text[0] - '0' + text[2] - '0');
	}
	return 0;
}
