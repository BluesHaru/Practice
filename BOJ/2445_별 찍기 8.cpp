/*---------------------------------------------------
	2445 별 찍기 8
	입출력
	문제정보 : 별을 찍어라(나비 넥타이)
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
	int tSize = 2 * N - 1;

	// 빈 곳 인덱스
	int bIdx = 0;

	// 별 인덱스
	int sIdx = 0;

	// 추가 값
	int plus = 1;

	for (int i = 0; i < tSize; ++i)
	{
		if (i < N)
		{
			// 왼쪽 별
			for (int j = 0; j <= i; ++j)
				cout << '*';

			// 중간 빈 칸
			int size = 2 * (N - (i + 1));
			for (int k = 0; k < size; ++k)
				cout << ' ';
			// 오른쪽 별
			for (int j = 0; j <= i; ++j)
				cout << '*';
		}
		else
		{
			int newIdx = i - N + 1;
			// 왼쪽 별
			for (int j = N; j > newIdx; --j)
				cout << '*';

			// 중간 빈 칸
			int size = 2 * newIdx;
			for (int k = 0; k < size; ++k)
				cout << ' ';
			// 오른쪽 별
			for (int j = N; j > newIdx; --j)
				cout << '*';
		}

		cout << '\n';
	}

	return 0;
}