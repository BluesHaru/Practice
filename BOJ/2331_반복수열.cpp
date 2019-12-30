/*---------------------------------------------------
	2331 반복수열
	배열
	문제정보 :	반복되는 부분을 제외했을 때, 수열에 남게 되는 수들의 개수를 구하는 프로그램을 작성하시오.
	조건 :
		Input)	첫째 줄에 A(1 ≤ A ≤ 9999), P(1 ≤ P ≤ 5)가 주어진다.
		Output)	첫째 줄에 반복되는 부분을 제외했을 때, 수열에 남게 되는 수들의 개수를 출력한다.
----------------------------------------------------*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int stNum, P;

unordered_map<int, int> chkNum;
vector<int> lst;

int iPow(int num)
{
	int cnt = P;
	int result = 1;
	while (cnt-- > 0)
		result *= num;

	return result;
}

int createSeqNum(int num)
{
	int result = 0;
	while (num != 0)
	{
		int tNum = num % 10;
		result += iPow(tNum);

		num /= 10;
	}

	return result;
}

int chkSeq(int num)
{
	int result = 0;
	int newNum = createSeqNum(num);
	lst.emplace_back(newNum);
	if (++chkNum[newNum] > 1)
		return newNum;
	else
		result = chkSeq(newNum);
	
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> stNum >> P;
	chkNum[stNum] = 1;
	lst.emplace_back(stNum);

	int num = chkSeq(stNum);

	auto iter = find(lst.begin(), lst.end(), num);
	
	vector<int> answer(lst.begin(), iter);

	cout << answer.size() << '\n';

	return 0;
}