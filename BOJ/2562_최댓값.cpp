/*---------------------------------------------------
	2562 최댓값
	수학, 구현(배열)
	문제정보 : 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
	조건 :
		Input) 자연수 N ( N < 100)
		Output) 최댓값 출력, 몇 번째 수 인지 출력
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int num, idx, maxNum = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> num;
		if (maxNum < num)
		{
			maxNum = num;
			idx = i + 1;
		}
	}

	cout << maxNum << '\n' << idx << '\n';


	return 0;
}