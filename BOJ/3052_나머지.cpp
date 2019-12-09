/*---------------------------------------------------
	3052 나머지
	수학, 구현(배열)
	문제정보 : 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
	조건 :
		Input) 첫 째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.
		Output)
----------------------------------------------------*/
#include <iostream>

using namespace std;

int arr[41];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int num, cnt = 0;
	
	for (int i = 0; i < 10; ++i)
	{
		cin >> num;
		++arr[num % 42];
	}
	for (int i = 0; i < 42; ++i)
		if (arr[i] > 0) ++cnt;

	cout << cnt << '\n';

	return 0;
}