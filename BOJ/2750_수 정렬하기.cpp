/*---------------------------------------------------
	2750 수 정렬하기
	정렬
	문제정보 :	N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
	조건 :
		Input)	수의 개수 N(1 ≤ N ≤ 1,000). 수 K (-1000 ≤ K ≤ 1,000) 수는 중복되지 않는다.
		Output)	첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> numbers(N);
	for (int i = 0; i < N; ++i)
		scanf("%d", &numbers[i]);

	sort(numbers.begin(), numbers.end());

	for (auto num : numbers)
		printf("%d\n", num);
	return 0;
}