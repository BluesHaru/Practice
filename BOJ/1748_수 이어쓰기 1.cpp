/*---------------------------------------------------
	1748 �� �̾�� 1
	BF
	�������� : 1���� N ������ ���� ���� ���� �ڸ����� ����϶�.
	���� :
		Input) N ( 1 <= N <= 1,000,000)
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int temp;
	int cnt = 1;
	int cmp = 10;
	int answer = 0;
	for (int i = 1; i <= N; ++i)
	{
		// �ڸ����� �þ ������ ������ �����Ѵ�.
		if (i >= cmp)
		{
			cmp *= 10;
			++cnt;
		}
		answer += cnt;
	}
	printf("%d\n", answer);

	return 0;
}