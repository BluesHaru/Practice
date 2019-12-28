// 2010 플러그
// 단순 수학

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int maxNum = -N + 1;

	while (N-- > 0)
	{
		int temp;
		cin >> temp;
		maxNum += temp;
	}
	cout << maxNum;
		
	return 0;
}