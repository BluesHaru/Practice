/*---------------------------------------------------
	1436 영화감독 숌
	BF, 탐색
	문제정보 :	숌이 만든 N번째 영화의 제목에 들어간 숫자를 출력하는 프로그램을 작성하시오. 
				숌은 이 시리즈를 항상 차례대로 만들고, 다른 영화는 만들지 않는다.
	조건 :
		Input)	첫째 줄에 숫자 N이 주어진다. N은 10,000보다 작거나 같은 자연수이다.
		Output)	첫째 줄에 N번째 영화의 제목에 들어간 수를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;


int main()
{
	int N;
	scanf("%d", &N);
	//N = N % 19 + 1;
	int cnt = 0;
	int num = 665;
	while (cnt != N)
	{
		num += 1;
		int sixCnt = 0;
		int tmpNum = num;
		while (tmpNum)
		{
			int temp = tmpNum % 10;
			if (6 == temp) ++sixCnt;
			else sixCnt = 0;

			if (sixCnt == 3) break;

			tmpNum /= 10;
		}
		if (sixCnt >= 3) ++cnt;
	}

	printf("%d\n", num);

	return 0;
}