/*---------------------------------------------------
	8958 OX����
	����, ����(�迭)
	�������� :	OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.
	���� :
		Input)	�׽�Ʈ ���̽� ���� T,
				���ڿ� S�� ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
		Output)	�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>
//#include <string.h> - �����Ϸ��� ���� �ʿ�.(strlen �Լ�)
using namespace std;

int OXQuiz(char* str, int len)
{
	int answer = 0, sum = 0;
	for (int k = 0; k < len; ++k)
	{
		if ('O' == str[k])
			++sum;
		else sum = 0;

		answer += sum;
	}

	return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char str[80] = "";
	int T;
	scanf_s("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf_s("%s", str, 80);
		int len = strlen(str);
		printf("%d\n", OXQuiz(str, len));
	}

	return 0;
}