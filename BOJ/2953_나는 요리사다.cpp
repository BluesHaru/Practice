/*---------------------------------------------------
	2953 ���� �丮���
	�迭
	�������� :	�� �����ڰ� ���� �� ������ �־����� ��, ����ڿ� ���� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù ��° �����ں��� �ټ� ��° �����ڱ��� ������� �־�����. �׻� ����ڰ� ������ ��츸 �Է����� �־�����.
		Output)	ù° �ٿ� ������� ��ȣ�� �װ� ���� ������ ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int arr[4];

int main()
{
	int winnerNum = 0;
	int point = 0;

	for (int i = 0; i < 5; ++i)
	{
		int total = 0;
		scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);
		total = arr[0] + arr[1] + arr[2] + arr[3];
		if (point < total)
		{
			winnerNum = i + 1;
			point = total;
		}
	}
	printf("%d %d\n", winnerNum, point);
	return 0;
}