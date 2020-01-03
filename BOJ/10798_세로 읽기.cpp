/*---------------------------------------------------
	10798 ���� �б�
	����
	�������� :	ĥ�ǿ� �ٿ��� �ܾ���� �־��� ��, �����̰� ���η� ���� ������� ���ڵ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�� �ټ����� �Է��� �־�����. �� �ٿ��� �ּ� 1��, �ִ� 15���� ���ڵ��� ��ĭ ���� �������� �־�����. 
				�־����� ���ڴ� ���� �빮�� ��A������ ��Z��, ���� �ҹ��� ��a������ ��z��, ���� ��0������ ��9�� �� �ϳ��̴�. �� ���� ���۰� �������� ��ĭ�� ����.
		Output)	�����̰� ���η� ���� ������� ���ڵ��� ����Ѵ�. �̶�, ���ڵ��� ���� ���� �����ؼ� ����Ѵ�. 
----------------------------------------------------*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<string> data(5);

	int maxLen = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> data[i];
		int curLen = data[i].length();
		if (maxLen < curLen)
			maxLen = curLen;
	}

	for (int k = 0; k < maxLen; ++k)
	{
		for (int r = 0; r < 5; ++r)
		{
			if (data[r].length() > k)
				cout << data[r][k];
		}
	}
	cout << '\n';
	return 0;
}