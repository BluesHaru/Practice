/*---------------------------------------------------
	10451 ���� ����Ŭ
	DFS, �׷���
	�������� :	N���� ������ �̷���� ������ �־����� ��, ���� ����Ŭ�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�� �׽�Ʈ ���̽��� ù° �ٿ��� ������ ũ�� N (2 �� N �� 1,000)�� �־�����. 
				��° �ٿ��� ������ �־�����, �� ������ �������� ���еǾ� �ִ�.
		Output)	�� �׽�Ʈ ���̽�����, �Է����� �־��� ������ �����ϴ� ���� ����Ŭ�� ������ ����Ѵ�.
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