/*---------------------------------------------------
	2108 통계학
	정렬
	문제정보 :	수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.
				1.산술평균 : N개의 수들의 합을 N으로 나눈 값
				2.중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
				3.최빈값 : N개의 수들 중 가장 많이 나타나는 값
				4.범위 : N개의 수들 중 최댓값과 최솟값의 차이
				N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
	조건 :
		Input)	수의 개수 N(1 ≤ N ≤ 500,000) 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.
		Output)	첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.
				둘째 줄에는 중앙값을 출력한다.
				셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.
				넷째 줄에는 범위를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct myPair
{
	myPair() : first(8001), second(0) {}
	int first;
	int second;
};

myPair arr[8001];
int middle[500001];

int main()
{
	int N;

	scanf("%d", &N);
	double sum = 0;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &middle[i]);
		sum += middle[i];
		int idx = middle[i] + 4000;
		if(8001 == arr[idx].first) arr[idx].first = idx;
		++arr[idx].second;
	}
	sort(middle, middle + N);
	sort(arr, arr + 8001, [](myPair &a, myPair &b)
	{
		if (a.second > b.second)
			return true;
		else if (a.second == b.second && a.first < b.first)
			return true;

		return false;
	});
	sum = floor(sum / N + 0.5);
	printf("%d\n", (int)sum);
	
	printf("%d\n", middle[N / 2]);
	
	printf("%d\n", (arr[0].second == arr[1].second ? arr[1].first : arr[0].first) - 4000);

	printf("%d\n", middle[N-1] - middle[0]);
	return 0;
}