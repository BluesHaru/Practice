/*---------------------------------------------------
	1764 �躸��
	�ڷᱸ��(����)
	�������� :	�赵 ���� ���, ���� ���� ����� ����� �ް�,
				�赵 ���� ���� ���(�� �� ���� ���)�� ã��
				�躸���� ���� ����� ���������� ���.
	���� :
		Input)	��� �� N, M ( 1 <= N,M <= 500,000 )
				��� �̸��� ���� S (20 ����, ���� �ҹ���)
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