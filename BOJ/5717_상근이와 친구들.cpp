/*---------------------------------------------------
	5717 ����̿� ģ����
	�����
	�������� :	������� ����ģ���� ����ģ���� �� ���� �������.	
				�Է��� �������� 0 0 �̴�.
	���� :
		Input)	���� ģ�� M, ���� ģ�� F (1 �� M, F �� 5)
----------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int M, F;
	while (true)
	{
		cin >> M >> F;
		if (M == 0 && F == 0) break;
		cout << M + F << '\n';
	}

	return 0;
}