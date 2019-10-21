/*---------------------------------------------------
	2444 �� ��� 7
	�����
	�������� : ���� ����(���̾Ƹ��)
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
			for (int j = N - 1; j > i; --j)
				cout << ' ';

			int size = (i * 2) + 1;
			for (int k = 0; k < size; ++k)
				cout << '*';
		}
		else
		{
			int bSize = i - (N - 1);
			for (int j = 0; j < bSize; ++j)
				cout << ' ';

			int size = (2 * N - i) * 2 - 3;
			for (int k = 0; k < size; ++k)
				cout << '*';
		}

		


		cout << '\n';
	}

	return 0;
}