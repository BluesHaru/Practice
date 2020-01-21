/*---------------------------------------------------
	10820 ���ڿ� �м�
	���ڿ�
	�������� :	���ڿ� N���� �־�����. �̶�, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.
	���� :
		Input)	ù° �ٺ��� N��° �ٱ��� ���ڿ��� �־�����. (1 �� N �� 100) ���ڿ��� ���̴� 100�� ���� �ʴ´�.
		Output)	ù° �ٺ��� N��° �ٱ��� ������ ���ڿ��� ���ؼ� �ҹ���, �빮��, ����, ������ ������ �������� ������ ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 100; ++i)
	{
		string str;
		getline(cin, str);

		int big, small, blank, num;
		big = small = blank = num = 0;

		int sLen = str.length();

		for (int k = 0; k < sLen; ++k)
		{
			if (str[k] == ' ') ++blank;
			else if (str[k] >= '0' && str[k] <= '9') ++num;
			else if (str[k] >= 'A' && str[k] <= 'Z') ++big;
			else if (str[k] >= 'a' && str[k] <= 'z') ++small;
		}

		printf("%d %d %d %d\n", small, big, num, blank);
	}

	return 0;
}