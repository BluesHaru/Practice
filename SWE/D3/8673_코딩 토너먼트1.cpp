// 8673_코딩 토너먼트1
// 문제 풀이 방법

#include <iostream>
#include <list>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	cin >> test_case;

	int K, num, answer;
	list<int> lst;
	for (int tc = 0; tc < test_case; ++tc)
	{
		answer = 0;
		lst.clear();

		cin >> K;

		int cnt = pow(2, K);

		for (int i = 0; i < cnt; ++i)
		{
			cin >> num;
			lst.emplace_back(num);
		}
		int st, ed;
		while (true)
		{
			// 첫 번째 수
			st = lst.front();
			lst.pop_front();

			// 첫 수 이후 아무 수가 없다면, break(1등만 남은 상황)
			if (lst.empty())
				break;

			ed = lst.front();
			lst.pop_front();

			if (st < ed)
			{
				answer += ed - st;
				lst.emplace_back(ed);
			}
			else
			{
				answer += st - ed;
				lst.emplace_back(st);
			}
		}


		// 번호 출력
		cout << '#' << tc + 1 << ' ';
		cout << answer << '\n';
	}

	return 0;
}
