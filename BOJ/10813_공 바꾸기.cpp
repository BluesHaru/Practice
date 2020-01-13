/*---------------------------------------------------
	10813 공바꾸기
	구현
	문제정보 :	공을 어떻게 바꿀지가 주어졌을 때, M번 공을 바꾼 이후에 각 바구니에 어떤 공이 들어있는지 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
				둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법이 주어진다. 각 방법은 두 정수 i j로 이루어져 있으며, 
				i번 바구니와 j번 바구니에 들어있는 공을 교환한다는 뜻이다. (1 ≤ i ≤ j ≤ N)
				도현이는 입력으로 주어진 순서대로 공을 교환한다.
		Output)	1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

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

	int fir, sec;
	while (M-- > 0)
	{
		cin >> fir >> sec;
		swap(arr[fir - 1], arr[sec - 1]);
	}
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));

	return 0;
}