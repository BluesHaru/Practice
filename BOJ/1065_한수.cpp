/*---------------------------------------------------
	1065 �Ѽ�
	��������
	�������� : N���� �۰ų� ���� �Ѽ��� ������ ����϶�
	���� :
		Input)  1,000���� �۰ų� ���� �ڿ��� N
----------------------------------------------------*/

#include <iostream>

using namespace std;

bool Hansoo(int num)
{
	int temp = num % 10;
	int next = 0;
	num /= 10;
	int cmp = 0;
	bool isStart = true;
	while (num > 0)
	{
		next = num % 10;
		if (isStart)
		{
			cmp = temp - next;
			isStart = false;
		}
		else
		{
			int newCmp = temp - next;
			if (cmp != newCmp)
				return false;
		}
		temp = next;
		num /= 10;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	int ans = 99;
	if (N < 100)
		ans = N;
	else
	{
		for (int i = 100; i <= N; ++i)
			if (Hansoo(i))
				++ans;
	}
	cout << ans << '\n';

	return 0;
}