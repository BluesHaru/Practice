/*---------------------------------------------------
	1157 단어 공부
	문자열 처리
	문제정보 :	알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
				단, 대문자와 소문자를 구분하지 않는다.
	조건 :
		Input)	첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
		Output)	첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
				단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
----------------------------------------------------*/
//#include <bits/stdc++.h> << 제출용
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