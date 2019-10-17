/*---------------------------------------------------
	2309 �ϰ� ������
	BF
	�������� :	��ȩ ���� ������ �� ��¥ �ϰ� �����̸� ã�ƶ�.
				�������� �� Ű�� ���� 100�̴�.
	���� :
		Input) �����̵��� Ű�� ���� �ٸ���, 100 �̸��� �ڿ��� �̴�.
		Output) �ϰ� �������� Ű�� �������� ���, �� ������ �������� �ʴ� ���� ����.
----------------------------------------------------*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int arr[9];
	int total = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];
		total += arr[i];
	}
	cout << '\n';

	// �̸� �����̵��� Ű�� ����.
	sort(arr, arr + 9);

	for (int i = 0; i < 9; ++i)
		for (int k = i + 1; k < 9; ++k)
			// ��ȩ �� 2���� �������� Ű�� �� ���� 100������ üũ
			if (i != k && 100 == (total - arr[i] - arr[k]))
			{
				// ���ǿ� ������ �����̵��� Ű�� ��� �� ����
				for (int m = 0; m < 9; ++m)
					if (m != i && m != k)
						cout << arr[m] << '\n';

				return 0;
			}


	return 0;
}