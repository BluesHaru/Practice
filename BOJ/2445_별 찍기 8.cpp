/*---------------------------------------------------
	2445 �� ��� 8
	�����
	�������� : ���� ����(���� ��Ÿ��)
	���� : 
		Input) N (1 <= N <= 100)
		Output) ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	// �� ������
	int tSize = 2 * N - 1;

	// �� �� �ε���
	int bIdx = 0;

	// �� �ε���
	int sIdx = 0;

	// �߰� ��
	int plus = 1;

	for (int i = 0; i < tSize; ++i)
	{
		if (i < N)
		{
			// ���� ��
			for (int j = 0; j <= i; ++j)
				cout << '*';

			// �߰� �� ĭ
			int size = 2 * (N - (i + 1));
			for (int k = 0; k < size; ++k)
				cout << ' ';
			// ������ ��
			for (int j = 0; j <= i; ++j)
				cout << '*';
		}
		else
		{
			int newIdx = i - N + 1;
			// ���� ��
			for (int j = N; j > newIdx; --j)
				cout << '*';

			// �߰� �� ĭ
			int size = 2 * newIdx;
			for (int k = 0; k < size; ++k)
				cout << ' ';
			// ������ ��
			for (int j = N; j > newIdx; --j)
				cout << '*';
		}

		cout << '\n';
	}

	return 0;
}