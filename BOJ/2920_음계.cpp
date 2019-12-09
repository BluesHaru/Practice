/*---------------------------------------------------
	2920 ����
	����, ����(�迭)
	�������� : ������ ������ ���� ����϶�.
	���� :
		Input) ������ ���� c d e f g a b C -> ���� 1,2,3,4,5,6,7,8
		Output) ���������̸� ascending, ���������̸� descending, �� �� �ƴ϶�� mixed 
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int num, curNum = 0, cmpNum;

	for (int i = 0; i < 8; ++i)
	{
		cin >> num;
		if (0 == curNum)
		{
			if (1 == num) cmpNum = -1;
			else if (8 == num) cmpNum = 1;
			else
			{
				cout << "mixed" << '\n';
				return 0;
			}
		}
		else
		{
			if (cmpNum != curNum - num)
			{
				cout << "mixed" << '\n';
				return 0;
			}
		}
		curNum = num;
	}
	if (1 == cmpNum) cout << "descending" << '\n'; 
	else cout << "ascending" << '\n';

	return 0;
}