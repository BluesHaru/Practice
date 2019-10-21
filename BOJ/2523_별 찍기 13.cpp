/*---------------------------------------------------
	2523 �� ��� 13
	�����
	�������� : ���� ����(������ �ɰ� ���̾�)
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
	int tSize = N * 2 - 1;

	for (int i = 0; i < tSize; ++i)
	{
		if (i < N)
		{
			// ��
			for (int k = 0; k <= i; ++k)
				cout << '*';
		}
		else
		{
			int newIdx = i - N + 1;
			
			// ��
			for (int k = N - newIdx; k > 0; --k)
				cout << '*';
		}
		cout << '\n';
	}

	return 0;
}