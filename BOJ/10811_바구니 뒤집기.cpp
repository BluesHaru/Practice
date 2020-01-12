/*---------------------------------------------------
	10811 바구니 뒤집기
	구현
	문제정보 :	바구니의 순서를 어떻게 바꿀지 주어졌을 때, 
				M번 바구니의 순서를 역순으로 만든 다음, 바구니에 적혀있는 번호를 가장 왼쪽 바구니부터 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
				둘째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다. 방법은 i j로 나타내고, 
				왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로 만든다는 뜻이다. (1 ≤ i ≤ j ≤ N)
				도현이는 입력으로 주어진 순서대로 바구니의 순서를 바꾼다.
		Output)	모든 순서를 바꾼 다음에, 가장 왼쪽에 있는 바구니부터 바구니에 적혀있는 순서를 공백으로 구분해 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M;

	cin >> N >> M;

	vector<int> arr(N);
	for (int i = 0; i < N; ++i)
		arr[i] = i + 1;

	int left, right;
	while (M-- > 0)
	{
		cin >> left >> right;
		--left, --right;
		while (left <= right)
		{
			swap(arr[left], arr[right]);
			++left;
			--right;
		}

	}
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));

	return 0;
}