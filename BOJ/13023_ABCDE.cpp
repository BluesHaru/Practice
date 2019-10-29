/*---------------------------------------------------
	13023 ABCDE
	BFS
	문제정보 : A->B->C->D->E 인 친구 관계가 있는가?
	조건 :
		Input)	사람의 수 N (5 ≤ N ≤ 2000), 친구 관계의 수 M (1 ≤ M ≤ 2000)
				정수 a와 b가 주어지며, a와 b가 친구라는 뜻이다. (0 ≤ a, b ≤ N-1, a ≠ b)
		Output) 존재하면 1, 아니라면 0

	// 추가 주석 : 일반 배열로 할 경우 최악의 경우 4백만 번을 반복해서 돌 가능성이 있기 때문에, 시간 초과가 생김.
----------------------------------------------------*/

#include <iostream>
#include <memory.h>
#include <vector>
using namespace std;

constexpr int MAX = 2001;

bool visited[MAX], ANS;
vector<int> vec[MAX];

int N, M;

void dfs(const int fir, int cnt)
{
	if (cnt == 5)
	{
		ANS = true;
		return;
	}

	visited[fir] = true;

	int vSize = vec[fir].size();

	for (int m = 0; m < vSize; ++m)
	{
		int next = vec[fir][m];
		if (!visited[next])
			dfs(next, cnt + 1);
		if (ANS) return;
	}
	visited[fir] = false;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	int fir, sec;
	for (int i = 0; i < M; ++i)
	{
		cin >> fir >> sec;
		vec[fir].emplace_back(sec);
		vec[sec].emplace_back(fir);
	}

	for (int k = 0; k <= N; ++k)
	{
		memset(visited, false, sizeof(	visited));
		dfs(k, 1);
		if (ANS) break;
	}
	if (ANS)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}