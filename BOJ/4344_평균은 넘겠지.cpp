/*---------------------------------------------------
	4344 ����� �Ѱ���
	����, ����(�迭)
	�������� :	���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
	���� :
		Input)	�׽�Ʈ ���̽��� ���� C
				�л��� �� N(1 �� N �� 1000, N�� ����), ���� G (0 �� G �� 100, N�� ����)
		Output)	�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ���
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	int C, N, stu[1000];
	scanf_s("%d", &C);
	for (int i = 0; i < C; ++i)
	{
		scanf_s("%d", &N);
		int total = 0;
		float result = 0;
		for (int k = 0; k < N; ++k)
		{
			scanf_s("%d", &stu[k]);
			total += stu[k];
		}
		total /= N;
		for (int k = 0; k < N; ++k)
			if (stu[k] > total) ++result;

		result = result / N * 100;
		printf("%.3f%%\n", result);
	}

	return 0;
}