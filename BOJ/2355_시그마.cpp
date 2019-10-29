/*---------------------------------------------------
	2355 시그마
	수학
	문제정보 : 입력 된 두 수 사이의 모든 수의 합을 구하라
	조건 :
		Input)	두 정수 A, B가 주어진다. (-2,147,483,648 ≤ A, B ≤ 2,147,483,647)
		Output)	답을 출력한다. (-2,147,483,648 ≤ 답 ≤ 2,147,483,647)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long A, B, answer;
	cin >> A >> B;
	if (A < B) answer = (B - A + 1) * (B + A) / 2;
	else answer = (A - B + 1) * (A + B) / 2;
	
	cout << answer << '\n';
	return 0;
}