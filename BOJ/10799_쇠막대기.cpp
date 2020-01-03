/*---------------------------------------------------
	10799 쇠막대기
	스택, 스택 안써도 되긴 함. 원리가 스택임
	문제정보 :	쇠막대기와 레이저의 배치를 나타내는 괄호 표현이 주어졌을 때, 잘려진 쇠막대기 조각의 총 개수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	한 줄에 쇠막대기와 레이저의 배치를 나타내는 괄호 표현이 공백없이 주어진다. 괄호 문자의 개수는 최대 100,000이다. 
		Output)	잘려진 조각의 총 개수를 나타내는 정수를 한 줄에 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string N;
	cin >> N;

	int len = N.length();

	int stick = 0;
	int result = 0;

	char prev = N[0];
	for (int i = 1; i < len; ++i)
	{
		if (N[i] == '(' && prev == '(')
			++stick;
		else if (N[i] == ')' && prev == '(')
			result += stick;
		else if(N[i] == ')' && prev == ')')
		{
			--stick;
			++result;
		}
		prev = N[i];
	}

	cout << result << '\n';

	return 0;
}