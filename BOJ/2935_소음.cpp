/*---------------------------------------------------
	2935 ����
	����
	�������� : ������ �־����� �� ����� �����ض�.
	���� :
		Input)	���� A�� B�� ��� 10�� ���� �����̰�, ���̴� �ִ� 100�ڸ��̴�.
		Output)	����� A+B �Ǵ� A*B
----------------------------------------------------*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, ops, b, answer;
	cin >> a >> ops >> b;
	
	if (a.length() < b.length())
		swap(a, b);

	answer = a;

	if (ops == "+")
	{
		int idx = a.length() - b.length();
		answer[idx] = (answer[idx] == '1' ? '2' : '1');
	}
	else
	{
		int len = b.length() - 1;
		while (len-- > 0)
			answer.push_back('0');
	}
	cout << answer << '\n';

	return 0;
}