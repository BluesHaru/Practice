// 8658 Summation
// 자릿수 덧셈

#include <iostream>

using namespace std;

// 자릿수를 더해서 리턴
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
// 가장 작은 수 리턴
int min(const int& a, const int& b)
{
	if (a < b)
		return a;
	else
		return b;
}
// 가장 큰 수 리턴
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
		// 번호 출력
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