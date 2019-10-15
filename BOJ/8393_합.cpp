// 8393 합
// 입출력

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, result = 0;
	cin >> N;
	do
	{
		result += N;
	} while (--N > 0);

	cout << result << '\n';

	return 0;
}