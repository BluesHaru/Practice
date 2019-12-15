/*---------------------------------------------------
	1075 ������
	����
	�������� :	���� N�� ���� �� �� �ڸ��� ������ �ٲ㼭 N�� F�� ������ �������� ������� �Ѵ�.
				�� �� �ڸ��� �����ϸ� �۰� ������� �Ѵ�.
	���� :
		Input)	N (100 �� N �� 2,000,000,000) F (F �� �� 100)
		Output)
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int main()
{
	int N, F, ans = 0;
	scanf("%d %d", &N, &F);

	int curNum = N / 100 * 100;
	
	for (; ans < 100; ++ans)
	{
		if (0 == (curNum + ans) % F)
			break;
	}

	if(ans < 10) printf("0");
	printf("%d\n", ans);
	return 0;
}