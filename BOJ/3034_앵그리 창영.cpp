
/*---------------------------------------------------
	3034 앵그리 창영
	수학
	문제정보 :	박스의 크기와 성냥의 길이가 주어졌을 때, 성냥이 박스에 들어갈 수 있는지 없는지를 구하는 프로그램을 작성하시오.창영이는 성냥을 하나씩 검사한다.
	조건 :
		Input)	첫째 줄에 던진 성냥의 개수 N과 박스의 가로 크기 W와 세로 크기 H가 주어진다. (1 ≤ N ≤ 50, 1 ≤ W, H ≤ 100)
				다음 N개 줄에는 성냥의 길이가 주어진다. 길이는 1보다 크거나 같고 1000보다 작거나 같은 자연수이다. 
		Output)	입력으로 주어지는 각각의 성냥에 대해서, 박스안에 들어갈 수 있으면 "DA" 없으면 "NE"를 출력한다.
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int N, W, H;
	scanf_s("%d %d %d", &N, &W, &H);

	int cmpNum = W * W + H * H;

	int L;
	for (int i = 0; i < N; ++i)
	{
		scanf_s("%d", &L);
		if (cmpNum >= L * L)
			printf("DA\n");
		else
			printf("NE\n");
	}
		
	return 0;
}