/*---------------------------------------------------
	11720 숫자의 합
	입출력
	문제 : N개의 숫자가 공백 없이 쓰여있다. 
		   이 숫자를 모두 합해서 출력하라
	조건 : 
		Input) 숫자의 개수 N (1 <= N <= 100)
----------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N; string M;
	cin >> N >> M;
	long long answer = 0;
	for(int i = 0; i < N; ++i)
	{
		if(M[i] != '0')
			answer += ((M[i] - '0') % 10);
	}
	cout << answer << '\n';

	return 0;
}