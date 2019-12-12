/*---------------------------------------------------
	1427 소트인사이드
	정렬
	문제정보 :	배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
	조건 :
		Input)	첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
		Output)	첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string N;
	cin >> N;

	sort(N.begin(), N.end(), greater<char>());

	cout << N << '\n';

	return 0;
}