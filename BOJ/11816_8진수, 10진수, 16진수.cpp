/*---------------------------------------------------
	11816 8진수, 10진수, 16진수
	수학
	문제정보 :	정수 X가 주어진다. 정수 X는 항상 8진수, 10진수, 16진수 중에 하나이다.
				8진수인 경우에는 수의 앞에 0이 주어지고, 16진수인 경우에는 0x가 주어진다.
				X를 10진수로 바꿔서 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 X가 주어진다. X는 10진수로 바꿨을 때, 1,000,000보다 작거나 같은 자연수이다. 
				16진수인 경우 알파벳은 소문자로만 이루어져 있다.
		Output)	첫째 줄에 입력받은 X를 10진수로 바꿔서 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)
#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%i", &n);
	// %i는 8진수, 10진수, 16진수를 입력 받음.
	// %d는 10진수의 정수를 입력받음.
	printf("%d", n);
}
//const int MAX = 10;
//
//char text[MAX];
//
//int main()
//{
//	scanf("%s", text);
//
//	int len = strlen(text);
//
//	int result = 0;
//
//	if (text[0] == '0')
//	{
//		int cmpNum = 1;
//		if (text[1] == 'x')
//		{
//			int tmpNum;
//			for (int k = len - 1; k >= 2; --k)
//			{
//				if (text[k] >= '0' && text[k] <= '9')
//					tmpNum = (text[k] - '0');
//				else
//					tmpNum = (text[k] - 'a') + 10;
//				result += tmpNum * cmpNum;
//				cmpNum *= 16;
//			}
//		}
//		else
//		{
//			for (int k = len - 1; k >= 1; --k)
//			{
//				result += (text[k] - '0') * cmpNum;
//				cmpNum *= 8;
//			}
//		}
//		printf("%d\n", result);
//	}
//	else
//		printf("%s\n", text);
//
//	return 0;
//}