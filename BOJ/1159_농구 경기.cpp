/*---------------------------------------------------
	1159 �� ���
	���ڿ�
	�������� :	���� ù ���ڰ� ���� ���� 5���� �����Ϸ��� �Ѵ�. ����, ���� ù ���ڰ� ���� ������ 5���� ���ٸ�, 
				����̴� ���� ���� ģ�� ��⸦ ����Ϸ��� �Ѵ�.
				����̴� ���� ��⸦ ���� ���� �� �ִ� ���� ù ���ڸ� ��� ���غ����� �Ѵ�.
	���� :
		Input)	������ �� N (1 �� N �� 150), ���� N�� �ٿ��� �� ������ ���� �־�����. 
				(���� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, �ִ� 30�����̴�)
		Output)	����̰� ���� �ټ� ���� ������ �� ���� ��쿡�� "PREDAJA" (����ǥ ����)�� ����Ѵ�. PREDAJA�� ũ�ξ�Ƽ�ƾ�� �׺��� �ǹ��Ѵ�. 
				������ �� �ִ� ��쿡�� ������ ���� ù ���ڸ� ���������� ������� ��� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string answer = "";

	int N;
	cin >> N;

	vector<string> lst;

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		lst.emplace_back(temp);
	}
	sort(lst.begin(), lst.end());

	char c = lst[0][0];
	
	int cnt = 1;

	for (int i = 1; i < N; ++i)
	{
		if (c == lst[i][0])
			++cnt;
		else
		{
			if (cnt >= 5)
				answer += c;
			c = lst[i][0];
			cnt = 1;
		}
	}
	if (cnt >= 5)
		answer += c;

	if(answer != "")
		cout << answer << '\n';
	else
		cout << "PREDAJA" << '\n';


	return 0;
}