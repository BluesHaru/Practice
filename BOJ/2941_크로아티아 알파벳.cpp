/*---------------------------------------------------
	2941 ũ�ξ�Ƽ�� ���ĺ�
	���ڿ� ���
	�������� :	������ ũ�ξ�Ƽ�� ���ĺ��� ������ ����϶�
	���� :
		Input)	ù° �ٿ� �ִ� 100������ �ܾ �־�����. ���ĺ� �ҹ��ڿ� '-', '='�θ� �̷���� �ִ�.
				�ܾ�� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ�. ���� ������ ǥ�� �����ִ� ���ĺ��� ����� ���·� �Էµȴ�. (������ ����)
		Output)	�Է����� �־��� �ܾ �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
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