/*---------------------------------------------------
	10451 순열 사이클
	DFS, 그래프
	문제정보 :	N개의 정수로 이루어진 순열이 주어졌을 때, 순열 사이클의 개수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	각 테스트 케이스의 첫째 줄에는 순열의 크기 N (2 ≤ N ≤ 1,000)이 주어진다. 
				둘째 줄에는 순열이 주어지며, 각 정수는 공백으로 구분되어 있다.
		Output)	각 테스트 케이스마다, 입력으로 주어진 순열에 존재하는 순열 사이클의 개수를 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 1001;

int N;
int arr[MAX];
bool visited[MAX];

void DFS(int node)
{
	visited[node] = true;
	if (!visited[arr[node]])
		DFS(arr[node]);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;

	cin >> T;
	for (int t = 0; t < T; ++T)
	{
		memset(visited, false, sizeof(visited));
		cin >> N;

		for (int i = 1; i <= N; i++)
			cin >> arr[i];
		int cnt = 0;

		for (int i = 1; i <= N; i++)
			if (!visited[i])
			{
				DFS(i);
				cnt++;
			}

		cout << cnt << "\n";
	}

	return 0;

}