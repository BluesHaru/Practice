// 8658 Summation
// �ڸ��� ����

#include <iostream>

using namespace std;

// �ڸ����� ���ؼ� ����
int SumNum(int num)
{
	int ans = 0;
	while (num > 0)
	{
		ans += num % 10;
		num /= 10;
	}
	return ans;
}
// ���� ���� �� ����
int min(const int& a, const int& b)
{
	if (a < b)
		return a;
	else
		return b;
}
// ���� ū �� ����
int max(const int& a, const int& b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	cin >> test_case;
	int maxNum, minNum = 0;
	int num;
	for (int tc = 0; tc < test_case; ++tc)
	{
		// ��ȣ ���
		maxNum = 0; minNum = 999999;
		for (int i = 0; i < 10; ++i)
		{
			cin >> num;
			num = SumNum(num);
			minNum = min(minNum, num);
			maxNum = max(maxNum, num);
		}
		cout << '#' << tc + 1 << ' ';

		cout << maxNum << ' ' << minNum << '\n';
	}

	return 0;
}