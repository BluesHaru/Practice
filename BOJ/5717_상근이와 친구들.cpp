/*---------------------------------------------------
	5717 상근이와 친구들
	입출력
	문제정보 :	상근이의 남자친구와 여자친구의 총 수를 출력하자.	
				입력의 마지막은 0 0 이다.
	조건 :
		Input)	남자 친구 M, 여자 친구 F (1 ≤ M, F ≤ 5)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int M, F;
	while (true)
	{
		cin >> M >> F;
		if (M == 0 && F == 0) break;
		cout << M + F << '\n';
	}

	return 0;
}