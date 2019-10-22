/*---------------------------------------------------
	1874 ���� ����
	Stack
	�������� :	������������ ������ ���� ���ϴ´�� ����� �������� 
				������ ã�� ���϶�
	���� :
		Input) ���� ���� N (1 <= n <= 100,000)
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