/*---------------------------------------------------
	1436 ��ȭ���� ��
	BF, Ž��
	�������� :	���� ���� N��° ��ȭ�� ���� �� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
				���� �� �ø�� �׻� ���ʴ�� �����, �ٸ� ��ȭ�� ������ �ʴ´�.
	���� :
		Input)	ù° �ٿ� ���� N�� �־�����. N�� 10,000���� �۰ų� ���� �ڿ����̴�.
		Output)	ù° �ٿ� N��° ��ȭ�� ���� �� ���� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;


int main()
{
	int N;
	scanf("%d", &N);
	//N = N % 19 + 1;
	int cnt = 0;
	int num = 665;
	while (cnt != N)
	{
		num += 1;
		int sixCnt = 0;
		int tmpNum = num;
		while (tmpNum)
		{
			int temp = tmpNum % 10;
			if (6 == temp) ++sixCnt;
			else sixCnt = 0;

			if (sixCnt == 3) break;

			tmpNum /= 10;
		}
		if (sixCnt >= 3) ++cnt;
	}

	printf("%d\n", num);

	return 0;
}