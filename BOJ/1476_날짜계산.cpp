/*---------------------------------------------------
	1476 ��¥���
	BF
	�������� : Ư���� ��¥����� �ϴ� ���� �⵵�� ���϶�. (����Ʈ ����)
	���� :
		Input) (1 �� E �� 15, 1 �� S �� 28, 1 �� M �� 19)
		Output)
----------------------------------------------------*/

#include <iostream>

using namespace std;

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//
//	// 15, 28, 19
//	int E, S, M;
//	cin >> E >> S >> M;
//	--E, --S, --M;
//	int nextE, nextS, nextM;
//	
//	nextE = nextS = nextM = 0;
//
//	int cnt = 0;
//	while (true)
//	{
//		if (E == nextE && S == nextS && M == nextM)
//			break;
//
//		nextE = ++nextE % 15;
//		nextS = ++nextS % 28;
//		nextM = ++nextM % 19;
//
//		++cnt;
//	}
//
//	cout << cnt + 1 << '\n';
//	return 0;
//}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// 15, 28, 19
	int E, S, M;
	cin >> E >> S >> M;
	
	int year = 1;
	while (true)
	{
		// ���ϴ� ��ǥ�� �����ϸ� �Ϸ�.
		if (((year - E) % 15 == 0) && ((year - S) % 28 == 0) && ((year - M) % 19 == 0))
			break;

		// �����ط� �Ѿ��.
		++year;
	}

	cout << year << '\n';
	return 0;
}