/*---------------------------------------------------
	4949 균형잡힌 세상
	스택
	문제정보 :	정민이를 도와 문자열이 주어졌을 때 균형잡힌 문자열인지 아닌지를 판단해보자.
	조건 :
		Input)	각 문자열은 영문 알파벳, 공백, 소괄호("( )") 대괄호("[ ]")등으로 이루어져 있으며, 길이는 100글자보다 작거나 같다.
				입력의 종료조건으로 맨 마지막에 점 하나(".")가 들어온다.
		Output)	각 줄마다 해당 문자열이 균형을 이루고 있으면 "yes"를, 아니면 "no"를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <stack>
using namespace std;


int main()
{
	char text[101];
	while (1)
	{
		scanf("%[^\n]s", text);
		stack<char> stk;
		if (text[0] == '.' && text[1] == '\0') break;
		int len = 0;
		while (text[len] != '\0')
		{
			if (text[len] == '(' || text[len] == '[')
				stk.emplace(text[len]);
			else if (text[len] == ')' || text[len] == ']')
			{
				if (stk.empty())
				{
					stk.emplace('%');
					break;
				}
				char temp = stk.top();
				if ((text[len] == ')' && temp != '(') || (text[len] == ']' && temp !='['))
					break;

				stk.pop();
			}
			++len;
		}
		if (stk.empty()) printf("yes\n");
		else printf("no\n");
		getchar();
	}
	return 0;
}