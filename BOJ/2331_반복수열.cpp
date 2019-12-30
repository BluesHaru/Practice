/*---------------------------------------------------
	2331 �ݺ�����
	�迭
	�������� :	�ݺ��Ǵ� �κ��� �������� ��, ������ ���� �Ǵ� ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� A(1 �� A �� 9999), P(1 �� P �� 5)�� �־�����.
		Output)	ù° �ٿ� �ݺ��Ǵ� �κ��� �������� ��, ������ ���� �Ǵ� ������ ������ ����Ѵ�.
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