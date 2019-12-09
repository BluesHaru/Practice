/*---------------------------------------------------
	2941 크로아티아 알파벳
	문자열 출력
	문제정보 :	변형된 크로아티아 알파벳의 갯수를 출력하라
	조건 :
		Input)	첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.
				단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다. (페이지 참조)
		Output)	입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[101];
	scanf_s("%s", str, 101);

	int len = strlen(str);
	int cnt = 0;
	for (int i = 0; i < len; ++i)
	{
		if ('c' == str[i])
		{
			if ('=' == str[i + 1] || '-' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else ++cnt;
		}
		else if ('d' == str[i])
		{
			if ('-' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else if('z' == str[i + 1] && '=' == str[i + 2])
			{
				++cnt;
				i += 2;
			}
			else ++cnt;
		}
		else if ('l' == str[i])
		{
			if ('j' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else ++cnt;
		}
		else if ('n' == str[i])
		{
			if ('j' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else ++cnt;
		}
		else if ('s' == str[i])
		{
			if ('=' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else ++cnt;
		}
		else if ('z' == str[i])
		{
			if ('=' == str[i + 1])
			{
				++cnt;
				++i;
			}
			else ++cnt;
		}
		else ++cnt;
	}
	printf("%d\n", cnt);

	return 0;
}