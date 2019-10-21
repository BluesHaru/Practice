/*---------------------------------------------------
	2443 별 찍기 6
	입출력
	문제정보 : 별을 찍어라(피라미드 거꾸로)
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

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << ' ';

		int size = ((N - (i + 1)) * 2) + 1;
		for (int k = 0; k < size; ++k)
			cout << '*';


		cout << '\n';
	}

	return 0;
}