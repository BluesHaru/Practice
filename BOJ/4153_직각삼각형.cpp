/*---------------------------------------------------
	4153 �����ﰢ��
	����
	�������� :	���� �ﰢ���� �Ǵ��� ã�ƶ�
	���� :
		Input)	�� ���� ���� 0 0 0 �� �Ǳ� ������ Ȯ��, (�� ���� 30,000 �̸�)
		Output)
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int num;
	while(1)
	{ 
		int min = 30000, mid = 0, max = 0;
		
		for (int i = 0; i < 3; ++i)
		{
			scanf_s("%d", &num);
			if (min > num) min = num;
			if (max < num) max = num;

			mid += num;
		}
		mid -= (min + max);

		if (0 == min && 0 == mid && 0 == max)
			return 0;

		if (min * min + mid * mid == max * max) printf("right\n");
		else printf("wrong\n");
	}


	return 0;
}