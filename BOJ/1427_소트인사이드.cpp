/*---------------------------------------------------
	1427 ��Ʈ�λ��̵�
	����
	�������� :	�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.
	���� :
		Input)	ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.
		Output)	ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string N;
	cin >> N;

	sort(N.begin(), N.end(), greater<char>());

	cout << N << '\n';

	return 0;
}