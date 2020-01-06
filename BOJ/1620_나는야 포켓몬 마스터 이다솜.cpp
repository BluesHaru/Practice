/*---------------------------------------------------
	1620 ���¾� ���ϸ� ������ �̴ټ�
	�ڷᱸ��, �̺� Ž��, ���� �˻� Ʈ��
	�������� :	���ϸ� ������ ������.
	���� :
		Input)	ù° �ٺ��� ���ʴ�� M���� �ٿ� ������ ������ ���� ���� ���������� ���ھ�!!!. 
				�Է����� ���ڰ� ���Դٸ� �� ���ڿ� �ش��ϴ� ���ϸ��� �̸���, 
				���ڰ� �������� �� ���ϸ��� �̸��� �ش��ϴ� ��ȣ�� ����ϸ� ��. �׷� ��ť~
		Output)	ù° �ٺ��� ���ʴ�� M���� �ٿ� ������ ������ ���� ���� ���������� ���ھ�!!!. 
				�Է����� ���ڰ� ���Դٸ� �� ���ڿ� �ش��ϴ� ���ϸ��� �̸���, 
				���ڰ� �������� �� ���ϸ��� �̸��� �ش��ϴ� ��ȣ�� ����ϸ� ��. �׷� ��ť~
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string dicNum[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> dicName;
	
	vector<string> dic;

	for (int i = 0; i < N; ++i)
	{
		string pokeName;
		cin >> pokeName;
		dicName[pokeName] = i + 1;
		dicNum[i + 1] = pokeName;
	}

	for (int k = 0; k < M; ++k)
	{
		string findStr;
		cin >> findStr;
		if (isdigit(findStr[0]))
			cout << dicNum[atoi(findStr.c_str())] << '\n';
		else
			cout << dicName[findStr] << '\n';
	}

	return 0;
}