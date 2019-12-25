/*---------------------------------------------------
	1181 단어정렬
	정렬
	문제정보 :	알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
				1. 길이가 짧은 것부터
				2. 길이가 같으면 사전 순으로
	조건 :
		Input)	단어의 개수 N (1≤ N ≤20,000) 
				N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.
		Output)	조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.
----------------------------------------------------*/
#pragma warning(disable:4996)
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct MyPerd
{
	bool operator()(string a, string b)
	{
		int aLen = a.length();
		int bLen = b.length();
		if (aLen > bLen) return false;
		else if (aLen == bLen)
			for (int i = 0; i < aLen; ++i)
				if (a[i] == b[i]) continue;
				else if (a[i] > b[i]) return false;
				else return true;
		return true;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	set<string> strSet;

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		if(strSet.end() == strSet.find(temp))
			strSet.emplace(temp);
	}
	vector<string> vec(strSet.begin(), strSet.end());
	sort(vec.begin(), vec.end(), MyPerd());

	for (auto str : vec)
		cout << str << ' ';
	cout << '\n';

	return 0;
}