/*---------------------------------------------------
	10992 별 찍기 17
	입출력
	문제정보 : 별을 찍어라
	조건 :
		Input) N (1 <= N <= 100)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		for (int k = N - i; k > 0; --k)
			cout << ' ';

		int tSize = i * 2 - 1;
		if (i == N)
		{
			for (int m = 0; m < tSize; ++m)
				cout << '*';
		}
		else
		{
			for (int m = 0; m < tSize; ++m)
			{
				if (0 == m || m == tSize - 1)
					cout << '*';
				else
					cout << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}