/*---------------------------------------------------
	11721 열 개씩 끊어 출력하기
	입출력
	문제 : 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다. 
		   한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하라
	조건 : 
		Input) 길이는 100을 넘지 않는다. 길이가 0인 단어는 주어지지 않는다.
		Output) 단어의 길이가 10의 배수가 아닌 경우에는 마지막 줄에는 10개 미만의 글자만 출력할 수도 있다.	
----------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str, temp;
	cin >> str;
	int size = str.length();
	
	int st = 0;

	for (int i = 0; i < size; ++i)
	{
		if (10 == st)
		{
			cout << temp << '\n';
			temp.clear();
			st = 0;
			temp += str[i];
		}
		else
			temp += str[i];
		++st;
	}
	cout << temp << '\n';

	return 0;
}