/*---------------------------------------------------
	2523 별 찍기 13
	입출력
	문제정보 : 별을 찍어라(반으로 쪼갠 다이아)
	조건 :
		Input) N (1 <= N <= 100)
		Output) 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	// 총 사이즈
	int tSize = N * 2 - 1;

	for (int i = 0; i < tSize; ++i)
	{
		if (i < N)
		{
			// 별
			for (int k = 0; k <= i; ++k)
				cout << '*';
		}
		else
		{
			int newIdx = i - N + 1;
			
			// 별
			for (int k = N - newIdx; k > 0; --k)
				cout << '*';
		}
		cout << '\n';
	}

	return 0;
}