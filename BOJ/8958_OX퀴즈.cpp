/*---------------------------------------------------
	8958 OX퀴즈
	수학, 구현(배열)
	문제정보 :	OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
				문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
	조건 :
		Input)	테스트 케이스 개수 T,
				문자열 S는 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.
		Output)	각 테스트 케이스마다 점수를 출력한다.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>
//#include <string.h> - 컴파일러에 따라 필요.(strlen 함수)
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