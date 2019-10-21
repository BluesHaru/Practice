/*---------------------------------------------------
	2440 별 찍기 3
	입출력
	문제정보 : 별을 찍어라(거꾸로 출력)
	조건 :
		Input) N (1 <= N <= 100)
		Output)
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
		for (int k = N; k > i; --k)
			cout << '*';
		cout << '\n';
	}

	return 0;
}