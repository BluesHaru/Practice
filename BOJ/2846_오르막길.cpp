/*---------------------------------------------------
	2846 ��������
	��������
	�������� :	���� ū ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :	
		Input)	������ ũ���� N(1 �� N �� 1000), N���� ���� ���� Pi(1 �� Pi �� 1000)
		Output)	���� ū ���������� ũ�⸦ ����Ѵ�. ���� ���������� ���� ��쿡�� 0�� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int main()
{
	int N, Pi, ans = 0, stNum = 0, curNum = 0;

	scanf("%d", &N);

	scanf("%d", &Pi);
	stNum = Pi;
	int tmpAns = 0;
	for (int i = 1; i < N; ++i)
	{
		scanf("%d", &Pi);
		if (curNum >= Pi)
		{
			tmpAns = curNum - stNum;
			if (tmpAns > ans) ans = tmpAns;
			stNum = Pi;
			curNum = Pi;
		}
		else
			curNum = Pi;
	}
	tmpAns = curNum - stNum;
	if (tmpAns > ans) ans = tmpAns;

	printf("%d\n", ans);
	return 0;
}