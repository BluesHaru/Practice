/*---------------------------------------------------
	2562 �ִ�
	����, ����(�迭)
	�������� : 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input) �ڿ��� N ( N < 100)
		Output) �ִ� ���, �� ��° �� ���� ���
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int num, idx, maxNum = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> num;
		if (maxNum < num)
		{
			maxNum = num;
			idx = i + 1;
		}
	}

	cout << maxNum << '\n' << idx << '\n';


	return 0;
}