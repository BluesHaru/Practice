/*---------------------------------------------------
	2872 우리집엔 도서관이 있어
	이분 탐색, 구현
	문제정보 :	현재 책이 어떻게 쌓여있는지가 주어졌을 때, 몇 번만에 사전 순으로 쌓을 수 있는지 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 책의 개수 N이 주어진다. (N ≤ 300,000)
				다음 N개 줄에는 가장 위에 있는 책부터 아래에 있는 책까지 순서대로 주어진다.
		Output)	첫째 줄에 몇 번만에 책을 정렬할 수 있는지 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>

using namespace std;

int arr[300001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int answer = N;

	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	for (int k = N - 1; k >= 0; --k)
		if (answer == arr[k])
			--answer;

	cout << answer << '\n';

	return 0;
}