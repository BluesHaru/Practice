/*---------------------------------------------------
	4948 베르트랑 공준
	수학, 구현
	문제정보 :	n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 
	조건 :
		Input)	입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 케이스는 n을 포함하며, 한 줄로 이루어져 있다. (n ≤ 123456)
				입력의 마지막에는 0이 주어진다.
		Output)	각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.
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

//#include <bits/stdc++.h> << 제출용
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