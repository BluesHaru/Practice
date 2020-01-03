/*---------------------------------------------------
	11724 ���� ����� ����
	��������
	�������� :	���� ���� �׷����� �־����� ��, ���� ��� (Connected Component)�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	������ ���� N�� ������ ���� M (1 �� N �� 1,000, 0 �� M �� N��(N-1)/2) 
				M���� �ٿ� ������ �� ���� u�� v (1 �� u, v �� N, u �� v)
		Output)	ù° �ٿ� ���� ����� ������ ����Ѵ�.
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
		// �������̹Ƿ�
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
////�������� DFS
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
//                 //node�� ����� �ٸ� ������ ��� �湮
//
//                 //�̹� �湮�ߴٸ� �湮���� �ʴ´�
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