/*---------------------------------------------------
	1620 나는야 포켓몬 마스터 이다솜
	자료구조, 이분 탐색, 이진 검색 트리
	문제정보 :	포켓몬 도감을 만들자.
	조건 :
		Input)	첫째 줄부터 차례대로 M개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어!!!. 
				입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을, 
				문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼. 그럼 땡큐~
		Output)	첫째 줄부터 차례대로 M개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어!!!. 
				입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을, 
				문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼. 그럼 땡큐~
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string dicNum[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> dicName;
	
	vector<string> dic;

	for (int i = 0; i < N; ++i)
	{
		string pokeName;
		cin >> pokeName;
		dicName[pokeName] = i + 1;
		dicNum[i + 1] = pokeName;
	}

	for (int k = 0; k < M; ++k)
	{
		string findStr;
		cin >> findStr;
		if (isdigit(findStr[0]))
			cout << dicNum[atoi(findStr.c_str())] << '\n';
		else
			cout << dicName[findStr] << '\n';
	}

	return 0;
}