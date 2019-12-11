/*---------------------------------------------------
	15596 정수 N개의 합
	수학, 구현(함수)
	문제정보 :	정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
	조건 :
		Input)	a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
				n: 합을 구해야 하는 정수의 개수
		Output)	a에 포함되어 있는 정수 n개의 합
----------------------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a)
{
	long long ans = 0LL;
	int len = a.size();
	for (int i = 0; i < len; ++i)
		ans += a[i];

	return ans;
}