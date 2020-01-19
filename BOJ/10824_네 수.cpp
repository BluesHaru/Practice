/*---------------------------------------------------
	10824 �� ��
	���ڿ�
	�������� :	�� �ڿ��� A, B, C, D�� �־�����. �̶�, A�� B�� ���� ���� C�� D�� ���� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
				�� �� A�� B�� ��ġ�� ���� A�� �ڿ� B�� ���̴� ���� �ǹ��Ѵ�. ��, 20�� 30�� ���̸� 2030�� �ȴ�.
	���� :
		Input)	ù° �ٿ� �� �ڿ��� A, B, C, D�� �־�����. (1 �� A, B, C, D �� 1,000,000)
		Output)	A�� B�� ���� ���� C�� D�� ���� ���� ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigIntegerAdd(string a, string b)
{
	string temp;
	long long sum = 0;
	while (!a.empty() || !b.empty() || sum)
	{
		if (!a.empty())
		{
			sum += a.back() - '0';
			a.pop_back();
		}
		if (!b.empty())
		{
			sum += b.back() - '0';
			b.pop_back();
		}
		temp.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(temp.begin(), temp.end());
	return temp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string ab, cd;
	ab = a + b;
	cd = c + d;

	string answer = bigIntegerAdd(ab, cd);

	cout << answer << '\n';

	return 0;
}