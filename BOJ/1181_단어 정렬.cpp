/*---------------------------------------------------
	1181 �ܾ�����
	����
	�������� :	���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
				1. ���̰� ª�� �ͺ���
				2. ���̰� ������ ���� ������
	���� :
		Input)	�ܾ��� ���� N (1�� N ��20,000) 
				N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �ϳ��� �־�����. �־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.
		Output)	���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�. ��, ���� �ܾ ���� �� �Էµ� ��쿡�� �� ������ ����Ѵ�.
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