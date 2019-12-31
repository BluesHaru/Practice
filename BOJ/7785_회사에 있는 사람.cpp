/*---------------------------------------------------
	7785 회사에 있는 사람
	자료구조, 문자열
	문제정보 :	로그가 주어졌을 때, 현재 회사에 있는 모든 사람을 구하는 프로그램을 작성하시오.
	조건 :
		Input)	로그에 기록된 출입 기록의 수 n (2 ≤ n ≤ 10^6)
				출입 기록이 순서대로 주어지며, 각 사람의 이름이 주어지고 "enter"나 "leave"가 주어진다. 
				"enter"인 경우는 출근, "leave"인 경우는 퇴근이다.
		Output)	현재 회사에 있는 사람의 이름을 사전 순의 역순으로 한 줄에 한 명씩 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <functional>	

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<string, greater<string>> temp;

	stringstream ss;

	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		string str = "";
		getline(cin, str);
		ss.str(str);
		string word, input;
		ss >> word >> input;

		if (input == "enter")
			temp.emplace(word);
		else
			temp.erase(word);

		ss.clear();
	}

	for (auto s : temp)
		cout << s << '\n';

	return 0;
}