/*---------------------------------------------------
	1874 스택 수열
	Stack
	문제정보 :	오름차순으로 들어오는 수를 원하는대로 출력이 가능한지 
				순서를 찾아 구하라
	조건 :
		Input) 수의 개수 N (1 <= n <= 100,000)
----------------------------------------------------*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	stack<int> stk;
	vector<char> answer;
	answer.reserve(N);
	int chkNum;
	int num = 1;
	for (int i = 0; i < N; ++i)
	{
		cin >> chkNum;
		while (true)
		{
			if (num > N + 1)
			{
				cout << "NO" << '\n';
				return 0;
			}

			if (!stk.empty() && stk.top() == chkNum)
			{
				stk.pop();
				answer.emplace_back('-');
				break;
			}
			else
			{
				stk.push(num++);
				answer.emplace_back('+');
			}
		}
	}
	for (auto ch : answer)
		cout << ch << '\n';

	return 0;
}