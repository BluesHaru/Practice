/*---------------------------------------------------
	1730 ��ȭ
	�迭, ��Ʈ����ũ
	�������� :	�κ� ���� �����̴� ����� ������ �־����� ��, ���� ���� ���� �������� ȥ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	������ ũ�� n (2<=n<=100), ���ڿ��� ���̴� �ִ� 1000
				�������� �̵��� 'U', �Ʒ������� �̵��� 'D', �������� �̵��� 'L', ���������� �̵��� 'R'
		Output)	�κ����� ������ ���� ���� '.'����, �κ����� ���� �������θ� ���� ���� '|'����,
				�κ����� ���� �������θ� ���� ���� '-'����, ������ ���� ���� ��η� ���� ���� '+'�� ǥ��
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int arr[101][101];
char cmd[1000];

int Site(char ch)
{
	if ('L' == ch || 'R' == ch)
		return 1;

	return 2;
}

int main()
{
	int n;
	scanf("%d %s", &n, cmd);

	int len = strlen(cmd);
	int curR = 0, curC = 0, nR = 0, nC = 0;
	for (int i = 0; i < len; ++i)
	{
		switch (cmd[i])
		{
		case 'U':	--nR;  break;
		case 'D':	++nR;  break;
		case 'L':	--nC;  break;
		default:	++nC;
		}

		if (nR < 0 || nR >= n || nC < 0 || nC >= n)
		{
			nR = curR; nC = curC;
			continue;
		}

		arr[curR][curC] |= Site(cmd[i]);
		arr[nR][nC] |= Site(cmd[i]);

		curR = nR;
		curC = nC;
	}

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < n; ++c)
		{
			printf("%c", ".-|+"[arr[r][c]]);
		}
		printf("\n");
	}

	return 0;
}