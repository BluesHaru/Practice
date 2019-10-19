/*---------------------------------------------------
	11728 �迭 ��ġ��
	BF, ��Ģ
	�������� : ���� �Ǿ��ִ� �� �迭�� ��ģ ���� �����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	A,B �迭�� ũ�� N, M (1 <= N,M <= 1,000,000)
				�迭�� ���� �� K (���밪, K <= 10^9)
----------------------------------------------------*/

#include <iostream>

using namespace std;

constexpr int MAX = 1000000;
int A[MAX];
int B[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	// �Է�
	for (int i = 0; i < N; ++i)
		cin >> A[i];

	for (int j = 0; j < M; ++j)
		cin >> B[j];

	int idxA = 0, idxB = 0;

	while (true)
	{
		// A,B�� �����Ͱ� ��� ���� ���,
		if (idxA < N && idxB < M)
		{
			if (A[idxA] < B[idxB])
				cout << A[idxA++] << ' ';
			else
				cout << B[idxB++] << ' ';
		}
		// A�� ������ ���,
		else if (idxA < N)
			cout << A[idxA++] << ' ';
		// B�� ������ ���,
		else if (idxB < M)
			cout << B[idxB++] << ' ';
		// �ƹ� �͵� ���� �ʾ��� ���� ����������.
		else
			break;
	}

	return 0;
}