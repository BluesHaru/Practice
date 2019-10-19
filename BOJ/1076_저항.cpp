/*---------------------------------------------------
	1076 저항
	수학
	문제정보 :	전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.
				처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.
	조건 :
		Input) 기존에 주어지는 표의 값만 존재 (사이트 참고)
		Output) 
----------------------------------------------------*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> resiTable;

void CreateTable()
{
	resiTable["black"] = 0;
	resiTable["brown"] = 1;
	resiTable["red"] = 2;
	resiTable["orange"] = 3;
	resiTable["yellow"] = 4;
	resiTable["green"] = 5;
	resiTable["blue"] = 6;
	resiTable["violet"] = 7;
	resiTable["grey"] = 8;
	resiTable["white"] = 9;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string cmd;
	long long answer = 0;

	// 테이블 데이터 넣기
	CreateTable();

	// 저항 값
	for (int i = 0; i < 2; ++i)
	{
		cin >> cmd;
		answer *= 10;
		answer += resiTable[cmd];
	}

	// 곱의 값
	cin >> cmd;
	int cnt = resiTable[cmd];
	for (int i = 0; i < cnt; ++i)
		answer *= 10;

	cout << answer << '\n';

	return 0;
}