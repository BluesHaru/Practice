/*---------------------------------------------------
	1920 수 찾기
	이분 탐색
	문제정보 :	N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 자연수 N(1≤ N ≤100,000), 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 
				다음 줄에는 M(1≤ M ≤100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 모든 정수들의 범위는 int 로 한다.
		Output)	M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

vector<int> arr;

int findNum(int num)
{
	int left = 0, right = N-1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] < num)
			left = mid + 1;
		else if (arr[mid] > num)
			right = mid - 1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());

	cin >> M;
	int num;
	for (int i = 0; i < M; ++i)
	{ 
		cin >> num;
		cout << findNum(num) << '\n';
	}

	return 0;
}