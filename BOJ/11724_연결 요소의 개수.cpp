/*---------------------------------------------------
	11724 연결 요소의 개수
	문제유형
	문제정보 :	방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	정점의 개수 N과 간선의 개수 M (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 
				M개의 줄에 간선의 양 끝점 u와 v (1 ≤ u, v ≤ N, u ≠ v)
		Output)	첫째 줄에 연결 요소의 개수를 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1001;

bool visited[MAX];
vector<int> node[MAX];

int SIZE;

void DFS(int st)
{
	visited[st] = true;

	int nSize = node[st].size();

	for (int k = 0; k < nSize; ++k)
	{
		int idx = node[st][k];
		if (!visited[idx])
			DFS(idx);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;

	int cnt;
	cin >> SIZE >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		int st, next;
		// 무방향이므로
		cin >> st >> next;

		node[st].emplace_back(next);
		node[next].emplace_back(st);
	}

	for (int k = 1; k <= SIZE; ++k)
	{
		if (!visited[k])
		{
			DFS(k);
			++answer;
		}
	}

	cout << answer << '\n';
	
	return 0;
}

//
//#include <iostream>
//
//#include <vector>
//
//using namespace std;
//
// 
//
//const int MAX = 1000 + 1;
//
// 
//
//int M, N;
//
//vector<int> graph[MAX];
//
//bool visited[MAX];
//
// 
//
////전형적인 DFS
//
//void DFS(int node)
//
//{
//
//        visited[node] = true;
//
// 
//
//        for (int i = 0; i < graph[node].size(); i++)
//
//        {
//
//                 int next = graph[node][i];
//
//                 //node에 연결된 다른 정점을 모두 방문
//
//                 //이미 방문했다면 방문하지 않는다
//
//                 if (!visited[next])
//
//                         DFS(next);
//
//        }
//
//}
//
// 
//
//int main(void)
//
//{
//
//        cin >> N >> M;
//
// 
//
//        for (int i = 0; i < M; i++)
//
//        {
//
//                 int node1, node2;
//
//                 cin >> node1 >> node2;
//
// 
//
//                 //undirected graph
//
//                 graph[node1].push_back(node2);
//
//                 graph[node2].push_back(node1);
//
//        }
//
// 
//
//        int cnt = 0;
//
//        for (int i = 1; i <= N; i++)
//
//                 if (!visited[i])
//
//                 {
//
//                         DFS(i);
//
//                         cnt++;
//
//                 }
//
// 
//
//        cout << cnt << endl;
//
//        return 0;
//
//}