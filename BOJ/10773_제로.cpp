/*---------------------------------------------------
	10773 제로
	스택, 구현
	문제정보 :	재현이는 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.
				재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다. 재민이를 도와주자!
	조건 :
		Input)	정수 K (1 ≤ K ≤ 100,000), K개의 줄에 정수 N, (0 ≤ N ≤ 1,000,000)
				정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
				정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.
		Output)	재민이가 최종적으로 적어 낸 수의 합을 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int temp;
	stack<int> numbers;

	int result = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> temp;
		
		if (temp)
		{
			numbers.emplace(temp);
			result += temp;
		}
		else if (!numbers.empty())
		{
			temp = numbers.top();
			numbers.pop();
			result -= temp;
		}
	}

	cout << result << '\n';

	return 0;
}