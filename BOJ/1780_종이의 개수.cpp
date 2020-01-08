/*---------------------------------------------------
	1780 종이의 개수
	분할 정복
	문제정보 :	N×N크기의 행렬로 표현되는 종이가 있다. 종이의 각 칸에는 -1, 0, 1의 세 값 중 하나가 저장되어 있다. 
				우리는 이 행렬을 적절한 크기로 자르려고 하는데, 이때 다음의 규칙에 따라 자르려고 한다.
				1. 만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
				2. (1)이 아닌 경우에는 종이를 같은 크기의 9개의 종이로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
				이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 
				1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 N(1≤N≤3^7, N은 3^k 꼴)이 주어진다. 다음 N개의 줄에는 N개의 정수로 행렬이 주어진다.
		Output)	첫째 줄에 -1로만 채워진 종이의 개수를, 둘째 줄에 0으로만 채워진 종이의 개수를, 셋째 줄에 1로만 채워진 종이의 개수를 출력한다.
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용

// 백준에서 scanf_s 안먹혀서 넣음 =_=;;

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