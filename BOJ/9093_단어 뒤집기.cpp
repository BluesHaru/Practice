/*---------------------------------------------------
	9093 단어 뒤집기
	문자열
	문제정보 :	문장이 주어졌을 때, 단어를 모두 뒤집어서 출력하는 프로그램을 작성하시오.
				단, 단어의 순서는 바꿀 수 없다. 단어는 영어 알파벳으로만 이루어져 있다.
	조건 :
		Input)	첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있으며, 문장이 하나 주어진다. 
				단어의 길이는 최대 20, 문장의 길이는 최대 1000이다. 단어와 단어 사이에는 공백이 하나 있다.
		Output)	각 테스트 케이스에 대해서, 입력으로 주어진 문장의 단어를 모두 뒤집어 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // For BaekJoon

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	cin.ignore();
	stringstream ss;
	while (N-- > 0)
	{
		string s;
		getline(cin, s);
		ss.str(s);
		
		while (ss >> s)
		{
			reverse(s.begin(), s.end());
			cout << s << ' ';
		}
		ss.clear();
		cout << '\n';
	}

	return 0;
}