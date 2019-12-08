/*---------------------------------------------------
	2753 윤년
	
	문제정보 : 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수인 윤년을 구하라
	조건 :
		Input)	연도 N (1 ≤ N ≤ 4000)
		Output)	윤년이면 1, 아니면 0
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	if ((N % 4 == 0) && (N % 100 != 0) || (N % 400 == 0))
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}