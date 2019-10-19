// 8673_�ڵ� ��ʸ�Ʈ1
// ���� Ǯ�� ���

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
			// ù ��° ��
			st = lst.front();
			lst.pop_front();

			// ù �� ���� �ƹ� ���� ���ٸ�, break(1� ���� ��Ȳ)
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


		// ��ȣ ���
		cout << '#' << tc + 1 << ' ';
		cout << answer << '\n';
	}

	return 0;
}
