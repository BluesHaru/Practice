/*---------------------------------------------------
	11816 8����, 10����, 16����
	����
	�������� :	���� X�� �־�����. ���� X�� �׻� 8����, 10����, 16���� �߿� �ϳ��̴�.
				8������ ��쿡�� ���� �տ� 0�� �־�����, 16������ ��쿡�� 0x�� �־�����.
				X�� 10������ �ٲ㼭 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� X�� �־�����. X�� 10������ �ٲ��� ��, 1,000,000���� �۰ų� ���� �ڿ����̴�. 
				16������ ��� ���ĺ��� �ҹ��ڷθ� �̷���� �ִ�.
		Output)	ù° �ٿ� �Է¹��� X�� 10������ �ٲ㼭 ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)
#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%i", &n);
	// %i�� 8����, 10����, 16������ �Է� ����.
	// %d�� 10������ ������ �Է¹���.
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