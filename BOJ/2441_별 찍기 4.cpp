/*---------------------------------------------------
	2441 �� ��� 4
	�����
	�������� : ���� ����(�Ųٷ� ���)
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
		for (int j = 0; j < i; ++j)
			cout << ' ';

		for (int k = N; k > i; --k)
			cout << '*';
		cout << '\n';
	}

	return 0;
}