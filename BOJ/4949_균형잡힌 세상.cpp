/*---------------------------------------------------
	4949 �������� ����
	����
	�������� :	�����̸� ���� ���ڿ��� �־����� �� �������� ���ڿ����� �ƴ����� �Ǵ��غ���.
	���� :
		Input)	�� ���ڿ��� ���� ���ĺ�, ����, �Ұ�ȣ("( )") ���ȣ("[ ]")������ �̷���� ������, ���̴� 100���ں��� �۰ų� ����.
				�Է��� ������������ �� �������� �� �ϳ�(".")�� ���´�.
		Output)	�� �ٸ��� �ش� ���ڿ��� ������ �̷�� ������ "yes"��, �ƴϸ� "no"�� ����Ѵ�.
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