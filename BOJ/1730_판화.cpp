/*---------------------------------------------------
	1730 판화
	배열, 비트마스크
	문제정보 :	로봇 팔을 움직이는 명령의 순서가 주어졌을 때, 목판 위에 패인 조각도의 혼적을 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	목판의 크기 n (2<=n<=100), 문자열의 길이는 최대 1000
				위쪽으로 이동은 'U', 아래쪽으로 이동은 'D', 왼쪽으로 이동은 'L', 오른쪽으로 이동은 'R'
		Output)	로봇팔이 지나지 않은 점은 '.'으로, 로봇팔이 수직 방향으로만 지난 점은 '|'으로,
				로봇팔이 수평 방향으로만 지난 점은 '-'으로, 수직과 수평 방향 모두로 지난 점은 '+'로 표기
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