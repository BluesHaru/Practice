/*---------------------------------------------------
	11655 ROT13
	자료구조
	문제정보 :	ROT13은 카이사르 암호의 일종으로 영어 알파벳을 13글자씩 밀어서 만든다.
				ROT13은 알파벳 대문자와 소문자에만 적용할 수 있다. 알파벳이 아닌 글자는 원래 글자 그대로 남아 있어야 한다.
				문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 알파벳 대문자, 소문자, 공백, 숫자로만 이루어진 문자열 S가 주어진다. S의 길이는 100을 넘지 않는다.
		Output)	첫째 줄에 S를 ROT13으로 암호화한 내용을 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <string.h>

using namespace std;

void ROT13(char& text)
{
	if ('a' <= text && text <= 'z')
	{
		int temp = text + 13;
		if (temp > 'z') temp -= ('z' - 'a' + 1);
		
		text = temp;
	}
	if ('A' <= text && text <= 'Z')
	{
		text += 13;
		if (text > 'Z') text -= ('Z' - 'A' + 1);
	}
}

int main()
{
	char text[101];
	scanf("%[^\n]s", text);
	int len = strlen(text);
	
	for (int i = 0; i < len; ++i)
		ROT13(text[i]);
	printf(text);

	return 0;
}