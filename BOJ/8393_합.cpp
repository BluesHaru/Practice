// 8393 합
// 입출력
// 문제 : 1부터 n까지의 합
// 입력 조건 : (1<= n <= 10,000)

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, result = 0;
	
	// 숫자 입력
	cin >> N;
	do
	{
		result += N;
	} while (--N > 0);

	// 결과 출력
	cout << result << '\n';

	return 0;
}