/*---------------------------------------------------
	9020 �������� ����
	����, ����
	�������� :	2���� ū ¦�� n�� �־����� ��, n�� ������ ��Ƽ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
				���� ������ n�� ������ ��Ƽ���� ���� ������ ��쿡�� �� �Ҽ��� ���̰� ���� ���� ���� ����Ѵ�.
	���� :
		Input)	ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
				�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ� ¦�� n�� �־�����. (4 �� n �� 10,000)
		Output)	�� �׽�Ʈ ���̽��� ���ؼ� �־��� n�� ������ ��Ƽ���� ����Ѵ�. ����ϴ� �Ҽ��� ���� �ͺ��� ���� ����ϸ�, �������� �����Ѵ�.
----------------------------------------------------*/

const int MAX = 10001;
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
#include <iostream>

using namespace std;

int main()
{
	erasto();

	int T;
	scanf_s("%d", &T);

	int num;
	while (T--)
	{
		scanf_s("%d", &num);
		
		if (4 == num)
		{
			printf("2 2\n");
			continue;
		}

		// Ȧ���� �Ҽ����� ��
		int firNum = 0, secNum = 0;
		for (int i = 3; i <= num; ++i)
		{
			int minusNum = num - i;
			if (i > minusNum) continue;
			if (0 == arr[i] && 0 == arr[minusNum])
			{
				firNum = i;
				secNum = minusNum;
			}
		}
		printf("%d %d\n", firNum, secNum);
	}

	return 0;
}