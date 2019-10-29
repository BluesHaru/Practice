/*---------------------------------------------------
	1260 DFS와 BFS
	DFS, BFS
	문제정보 : DFS, BFS로 탐색한 결과를 순서대로 출력
	조건 :
		Input) 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 시작 정점 V
----------------------------------------------------*/

#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
using namespace std;


int N, M, V;
constexpr int MAX = 1001;
//bool visited[MAX];
//vector<int> vec[MAX];
map<int, set<int>> nodeData;
unordered_map<int, bool> visited;
void DFS(int next)
{
	cout << next << ' ';
	visited[next] = true;
	set<int>& node = nodeData[next];

	for (auto n : node)
	{
		if (false == visited[n])
			DFS(n);
	}
}
void BFS(int next)
{
	queue<int> q;
	q.emplace(next);

	int cnt = 0;
	while (!q.empty() && cnt < N)
	{
		int next = q.front();
		q.pop();

		if (visited[next])
			continue;

		cout << next << ' ';
		++cnt;
		visited[next] = true;
		set<int>& node = nodeData[next];

		for (auto n : node)
		{
			if (false == visited[n])
			{
				q.emplace(n);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> V;

	int st, ed;
	for (int i = 0; i < M; ++i)
	{
		cin >> st >> ed;
		nodeData[st].emplace(ed);
		nodeData[ed].emplace(st);
		visited[st] = false;
		visited[ed] = false;
	}
	DFS(V);
	cout << '\n';
	auto iter_end = visited.end();
	for (auto iter = visited.begin(); iter != iter_end; ++iter)
		iter->second = false;
	BFS(V);

	return 0;
}