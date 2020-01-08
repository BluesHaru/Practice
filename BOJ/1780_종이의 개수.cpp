/*---------------------------------------------------
	1780 ������ ����
	���� ����
	�������� :	N��Nũ���� ��ķ� ǥ���Ǵ� ���̰� �ִ�. ������ �� ĭ���� -1, 0, 1�� �� �� �� �ϳ��� ����Ǿ� �ִ�. 
				�츮�� �� ����� ������ ũ��� �ڸ����� �ϴµ�, �̶� ������ ��Ģ�� ���� �ڸ����� �Ѵ�.
				1. ���� ���̰� ��� ���� ���� �Ǿ� �ִٸ� �� ���̸� �״�� ����Ѵ�.
				2. (1)�� �ƴ� ��쿡�� ���̸� ���� ũ���� 9���� ���̷� �ڸ���, ������ �߸� ���̿� ���ؼ� (1)�� ������ �ݺ��Ѵ�.
				�̿� ���� ���̸� �߶��� ��, -1�θ� ä���� ������ ����, 0���θ� ä���� ������ ����, 
				1�θ� ä���� ������ ������ ���س��� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� N(1��N��3^7, N�� 3^k ��)�� �־�����. ���� N���� �ٿ��� N���� ������ ����� �־�����.
		Output)	ù° �ٿ� -1�θ� ä���� ������ ������, ��° �ٿ� 0���θ� ä���� ������ ������, ��° �ٿ� 1�θ� ä���� ������ ������ ����Ѵ�.
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����

// ���ؿ��� scanf_s �ȸ����� ���� =_=;;

#include <iostream>
#include <vector>

using namespace std;

int maxSize;
int ans[3];

vector<vector<int>> board;

bool check(int r, int c, int size)
{
	int chkNum = board[r][c];
	for (int i = r; i < r + size; ++i)
		for (int k = c; k < c + size; ++k)
			if (chkNum != board[i][k])
				return false;

	return true;
}

void solution(int r, int c, int num)
{
	if (check(r, c, num))
		++ans[board[r][c]];
	else
	{
		int newSize = num / 3;
		for (int i = 0; i < 3; ++i)
			for (int k = 0; k < 3; ++k)
				solution(r + newSize * i, c + newSize * k, newSize);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> maxSize;

	board.resize(maxSize, vector<int>(maxSize));

	int total = 0;
	for(int i = 0; i < maxSize; ++i)
		for (int k = 0; k < maxSize; ++k)
		{
			cin >> board[i][k];
			++board[i][k];
		}

	solution(0, 0, maxSize);

	for (auto num : ans)
		cout << num << '\n';

	return 0;
}