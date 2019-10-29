/*---------------------------------------------------
	13023 ABCDE
	BFS
	�������� : A->B->C->D->E �� ģ�� ���谡 �ִ°�?
	���� :
		Input)	����� �� N (5 �� N �� 2000), ģ�� ������ �� M (1 �� M �� 2000)
				���� a�� b�� �־�����, a�� b�� ģ����� ���̴�. (0 �� a, b �� N-1, a �� b)
		Output) �����ϸ� 1, �ƴ϶�� 0

	// �߰� �ּ� : �Ϲ� �迭�� �� ��� �־��� ��� 4�鸸 ���� �ݺ��ؼ� �� ���ɼ��� �ֱ� ������, �ð� �ʰ��� ����.
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