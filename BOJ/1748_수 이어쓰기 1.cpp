/*---------------------------------------------------
	1748 �� �̾�� 1
	BF
	�������� : 1���� N ������ ���� ���� ���� �ڸ����� ����϶�.
	���� :
		Input) N ( 1 <= N <= 1,000,000)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	int temp;
	int cnt = 1;
	int cmp = 10;
	int answer = 0;
	for (int i = 1; i <= N; ++i)
	{
		// �ڸ����� �þ ������ ������ �����Ѵ�.
		if (i >= cmp)
		{
			cmp *= 10;
			++cnt;
		}
		answer += cnt;
	}
	cout << answer << '\n';

	return 0;
}