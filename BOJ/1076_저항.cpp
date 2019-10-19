/*---------------------------------------------------
	1076 ����
	����
	�������� :	���� ��ǰ���� ������ ����. ������ �� 3���� �̿��ؼ� �� ������ �� ������ ��Ÿ����.
				ó�� �� 2���� ������ ���̰�, ������ ���� ���ؾ� �ϴ� ���̴�.
	���� :
		Input) ������ �־����� ǥ�� ���� ���� (����Ʈ ����)
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

	// ���̺� ������ �ֱ�
	CreateTable();

	// ���� ��
	for (int i = 0; i < 2; ++i)
	{
		cin >> cmd;
		answer *= 10;
		answer += resiTable[cmd];
	}

	// ���� ��
	cin >> cmd;
	int cnt = resiTable[cmd];
	for (int i = 0; i < cnt; ++i)
		answer *= 10;

	cout << answer << '\n';

	return 0;
}