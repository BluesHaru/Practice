/*---------------------------------------------------
	1476 날짜계산
	BF
	문제정보 : 특이한 날짜계산을 하는 곳의 년도를 구하라. (사이트 참고)
	조건 :
		Input) (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
		Output)
----------------------------------------------------*/

#include <iostream>

using namespace std;

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//
//	// 15, 28, 19
//	int E, S, M;
//	cin >> E >> S >> M;
//	--E, --S, --M;
//	int nextE, nextS, nextM;
//	
//	nextE = nextS = nextM = 0;
//
//	int cnt = 0;
//	while (true)
//	{
//		if (E == nextE && S == nextS && M == nextM)
//			break;
//
//		nextE = ++nextE % 15;
//		nextS = ++nextS % 28;
//		nextM = ++nextM % 19;
//
//		++cnt;
//	}
//
//	cout << cnt + 1 << '\n';
//	return 0;
//}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// 15, 28, 19
	int E, S, M;
	cin >> E >> S >> M;
	
	int year = 1;
	while (true)
	{
		// 원하는 목표에 도달하면 완료.
		if (((year - E) % 15 == 0) && ((year - S) % 28 == 0) && ((year - M) % 19 == 0))
			break;

		// 다음해로 넘어간다.
		++year;
	}

	cout << year << '\n';
	return 0;
}