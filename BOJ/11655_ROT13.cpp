/*---------------------------------------------------
	11655 ROT13
	�ڷᱸ��
	�������� :	ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о �����.
				ROT13�� ���ĺ� �빮�ڿ� �ҹ��ڿ��� ������ �� �ִ�. ���ĺ��� �ƴ� ���ڴ� ���� ���� �״�� ���� �־�� �Ѵ�.
				���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� ���ĺ� �빮��, �ҹ���, ����, ���ڷθ� �̷���� ���ڿ� S�� �־�����. S�� ���̴� 100�� ���� �ʴ´�.
		Output)	ù° �ٿ� S�� ROT13���� ��ȣȭ�� ������ ����Ѵ�.
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