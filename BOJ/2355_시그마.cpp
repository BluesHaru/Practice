/*---------------------------------------------------
	2355 �ñ׸�
	����
	�������� : �Է� �� �� �� ������ ��� ���� ���� ���϶�
	���� :
		Input)	�� ���� A, B�� �־�����. (-2,147,483,648 �� A, B �� 2,147,483,647)
		Output)	���� ����Ѵ�. (-2,147,483,648 �� �� �� 2,147,483,647)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long A, B, answer;
	cin >> A >> B;
	if (A < B) answer = (B - A + 1) * (B + A) / 2;
	else answer = (A - B + 1) * (A + B) / 2;
	
	cout << answer << '\n';
	return 0;
}