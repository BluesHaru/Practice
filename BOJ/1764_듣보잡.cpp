/*---------------------------------------------------
	1764 듣보잡
	자료구조(정렬)
	문제정보 :	듣도 못한 사람, 보도 못한 사람을 나누어서 받고,
				듣도 보도 못한 사람(둘 다 속한 사람)을 찾아
				듣보잡의 수와 명단을 사전순으로 출력.
	조건 :
		Input)	사람 수 N, M ( 1 <= N,M <= 500,000 )
				사람 이름의 길이 S (20 이하, 영문 소문자)
----------------------------------------------------*/

#include <iostream>
#include <set>
#include <list>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	set<string> temp;
	list<string> names;

	int N, M;
	cin >> N >> M;

	string name;

	for (int i = 0; i < N; ++i)
	{
		cin >> name;
		temp.emplace(name);
	}

	for (int k = 0; k < M; ++k)
	{
		cin >> name;
		if (temp.end() != temp.find(name))
			names.emplace_back(name);
	}
	cout << names.size() << '\n';
	names.sort();

	for (auto n : names)
		cout << n << '\n';

	return 0;
}