/*---------------------------------------------------
	2164 카드2
	큐,덱, 시뮬레이션
	문제정보 :	N장의 카드가 있다. 각각의 카드는 차례로 1부터 N까지의 번호가 붙어 있으며, 
				1번 카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로 카드가 놓여 있다.
				다음과 같은 순서로 진행하고 마지막에 남는 카드를 출력하라.
				1. 제일 위에 있는 카드를 바닥에 버린다. 
				2. 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
	조건 :
		Input)	첫째 줄에 정수 N(1≤ N ≤500,000)이 주어진다.
		Output)	첫째 줄에 남게 되는 카드의 번호를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	queue<int> q;
	for (int i = 0; i < N; ++i)
		q.emplace(i + 1);

	int size = q.size();
	while(1 != size)
	{
		q.pop();
		q.push(q.front());
		q.pop();
		--size;
	}
	printf("%d\n", q.front());
	return 0;
}