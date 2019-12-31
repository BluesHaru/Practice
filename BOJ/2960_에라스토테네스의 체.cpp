/*---------------------------------------------------
	2960 �������׳׽��� ü
	�������׳׽��� ü, ����
	�������� :	�����佺�׳׽��� ü�� N���� �۰ų� ���� ��� �Ҽ��� ã�� ������ �˰����̴�.
				N, K�� �־����� ��, K��° ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	N�� K (1 �� K < N, max(2, K) < N �� 1000)
		Output)	ù° �ٿ� K��° ������ ���� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>

using namespace std;

int arr[1001];

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);

	int curNum = 2;

	for (int i = 2; i <= N; ++i)
	{
		for (int m = i; m <= N; m += i)
		{
			if (0 == arr[m])
			{
				arr[m] = 1;
				curNum = m;
				if (--K == 0)
				{
					printf("%d\n", curNum);
					return 0;
				}
			}
		}
		
	}
	printf("%d\n", curNum);

	return 0;
}