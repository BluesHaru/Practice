/*---------------------------------------------------
	4948 ����Ʈ�� ����
	����, ����
	�������� :	n�� �־����� ��, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	���� :
		Input)	�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. �� ���̽��� n�� �����ϸ�, �� �ٷ� �̷���� �ִ�. (n �� 123456)
				�Է��� ���������� 0�� �־�����.
		Output)	�� �׽�Ʈ ���̽��� ���ؼ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ����Ѵ�.
----------------------------------------------------*/

const int MAX = 123456 * 2 + 1;
int arr[MAX];

void erasto()
{
	arr[0] = 1; arr[1] = 1;
	for (int i = 2; i * i < MAX; ++i)
	{
		if (!arr[i])
		{
			for (int k = i * i; k < MAX; k += i)
				arr[k] = 1;
		}
	}
}

//#include <bits/stdc++.h> << �����
#include <iostream>

using namespace std;

int main()
{
	erasto();

	int num;
	while (1)
	{
		scanf_s("%d", &num);
		if (0 == num) return 0;
		int cnt = 0;
		int high = num * 2;
		for (int i = num + 1; i <= high; ++i)
			if (!arr[i]) ++cnt;

		printf("%d\n", cnt);
	}


	return 0;
}