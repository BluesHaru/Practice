/*---------------------------------------------------
	6588 �������� ����
	����, ����
	�������� :	�鸸 ������ ��� ¦���� ���ؼ�, �� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�׽�Ʈ ���̽� T ( T < 100,000), ¦�� ���� n (6 �� n �� 1000000)
				�Է��� ������ �ٿ��� 0�� �ϳ� �־�����.
		Output)	�� �׽�Ʈ ���̽��� ���ؼ�, n = a + b ���·� ����Ѵ�. �̶�, a�� b�� Ȧ�� �Ҽ��̴�. ���ڿ� �����ڴ� ���� �ϳ��� ���еǾ��� �ִ�. 
				����, n�� ���� �� �ִ� ����� ���� �������, b-a�� ���� ū ���� ����Ѵ�. 
				��, �� Ȧ�� �Ҽ��� ������ n�� ��Ÿ�� �� ���� ��쿡�� "Goldbach's conjecture is wrong."�� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>

using namespace std;

const int MAX = 1000001;
int arr[MAX];

void erasto()
{
	arr[0] = 1; arr[1] = 1;
	for (int i = 2; i * i < MAX; ++i)
	{
		if (!arr[i])
		{
			for (int k = i * i; k < MAX; k += i)
				arr[k] = 1;
		}
	}
}

int main()
{
	erasto();

	int num;
	while (1)
	{
		scanf_s("%d", &num);

		if (0 == num) return 0;

		int cmp = num >> 1;

		// Ȧ���� �Ҽ����� ��
		int firNum = 0, secNum = 0;
		for (int i = 2; i <= cmp; ++i)
		{
			int minusNum = num - i;
			if (i > minusNum) continue;
			if (0 == arr[i] && 0 == arr[minusNum])
			{
				firNum = i;
				secNum = minusNum;
				break;
			}
		}
		if (0 == firNum && 0 == secNum)
			printf("Goldbach's conjecture is wrong.");
		else
			printf("%d = %d + %d\n", num, firNum, secNum);
	}

	return 0;
}