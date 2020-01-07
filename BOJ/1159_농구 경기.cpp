/*---------------------------------------------------
	1159 농구 경기
	문자열
	문제정보 :	성의 첫 글자가 같은 선수 5명을 선발하려고 한다. 만약, 성의 첫 글자가 같은 선수가 5명보다 적다면, 
				상근이는 내일 있을 친선 경기를 기권하려고 한다.
				상근이는 내일 경기를 위해 뽑을 수 있는 성의 첫 글자를 모두 구해보려고 한다.
	조건 :
		Input)	선수의 수 N (1 ≤ N ≤ 150), 다음 N개 줄에는 각 선수의 성이 주어진다. 
				(성은 알파벳 소문자로만 이루어져 있고, 최대 30글자이다)
		Output)	상근이가 선수 다섯 명을 선발할 수 없는 경우에는 "PREDAJA" (따옴표 없이)를 출력한다. PREDAJA는 크로아티아어로 항복을 의미한다. 
				선발할 수 있는 경우에는 가능한 성의 첫 글자를 사전순으로 공백없이 모두 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string answer = "";

	int N;
	cin >> N;

	vector<string> lst;

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		lst.emplace_back(temp);
	}
	sort(lst.begin(), lst.end());

	char c = lst[0][0];
	
	int cnt = 1;

	for (int i = 1; i < N; ++i)
	{
		if (c == lst[i][0])
			++cnt;
		else
		{
			if (cnt >= 5)
				answer += c;
			c = lst[i][0];
			cnt = 1;
		}
	}
	if (cnt >= 5)
		answer += c;

	if(answer != "")
		cout << answer << '\n';
	else
		cout << "PREDAJA" << '\n';


	return 0;
}