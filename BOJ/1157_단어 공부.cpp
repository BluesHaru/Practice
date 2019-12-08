/*---------------------------------------------------
	1157 �ܾ� ����
	���ڿ� ó��
	�������� :	���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
				��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.
	���� :
		Input)	ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.
		Output)	ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�.
				��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
----------------------------------------------------*/
//#include <bits/stdc++.h> << �����
#include <iostream>
#include <string.h>
using namespace std;

char str[1000000];

// a ~ z == 97 ~ 122
// A ~ Z == 65 ~ 90

int main()
{
	int arr[26] = { 0, };
	scanf_s("%s", str, 1000000);
	int len = strlen(str);
	int maxCnt = 0;
	int maxIdx = 0;
	for (int i = 0; i < len; ++i)
	{
		int idx;
		if ('a' <= str[i] && 'z' >= str[i]) idx = (int)str[i] - 97 ;
		else if ('A' <= str[i] && 'Z' >= str[i]) idx = (int)str[i] - 65;
		if (maxCnt < ++arr[idx])
		{
			maxCnt = arr[idx];
			maxIdx = idx;
		}
	}
	char bigWord = maxIdx + 65;
	for (int k = 0; k < 26; ++k)
	{
		if (maxCnt == arr[k] && maxIdx != k)
		{
			printf("%c\n", '?');
			return 0;
		}
	}
	printf("%c\n", bigWord);

	return 0;
}