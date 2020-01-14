/*---------------------------------------------------
	10817 세 수
	구현
	문제정보 :	세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 
	조건 :
		Input)	첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)
		Output)	두 번째로 큰 정수를 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	multiset<int> num = { A,B,C };

	cout << *(++num.begin()) << '\n';

	return 0;
}