/*---------------------------------------------------
	10798 세로 읽기
	구현
	문제정보 :	칠판에 붙여진 단어들이 주어질 때, 영석이가 세로로 읽은 순서대로 글자들을 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	총 다섯줄의 입력이 주어진다. 각 줄에는 최소 1개, 최대 15개의 글자들이 빈칸 없이 연속으로 주어진다. 
				주어지는 글자는 영어 대문자 ‘A’부터 ‘Z’, 영어 소문자 ‘a’부터 ‘z’, 숫자 ‘0’부터 ‘9’ 중 하나이다. 각 줄의 시작과 마지막에 빈칸은 없다.
		Output)	영석이가 세로로 읽은 순서대로 글자들을 출력한다. 이때, 글자들을 공백 없이 연속해서 출력한다. 
----------------------------------------------------*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<string> data(5);

	int maxLen = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> data[i];
		int curLen = data[i].length();
		if (maxLen < curLen)
			maxLen = curLen;
	}

	for (int k = 0; k < maxLen; ++k)
	{
		for (int r = 0; r < 5; ++r)
		{
			if (data[r].length() > k)
				cout << data[r][k];
		}
	}
	cout << '\n';
	return 0;
}