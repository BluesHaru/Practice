/*---------------------------------------------------
	2442 �� ��� 5
	�����
	�������� : ���� ����(�Ƕ�̵�)
	���� :
		Input) N (1 <= N <= 100)
		Output)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int bSize = i + 1;
		for (int j = N; j > bSize; --j)
			cout << ' ';

		int size = (i * 2) + 1;
		for (int k = 0; k < size; ++k)
			cout << '*';
		cout << '\n';
	}

	return 0;
}