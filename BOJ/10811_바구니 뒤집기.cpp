/*---------------------------------------------------
	10811 �ٱ��� ������
	����
	�������� :	�ٱ����� ������ ��� �ٲ��� �־����� ��, 
				M�� �ٱ����� ������ �������� ���� ����, �ٱ��Ͽ� �����ִ� ��ȣ�� ���� ���� �ٱ��Ϻ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� N (1 �� N �� 100)�� M (1 �� M �� 100)�� �־�����.
				��° �ٺ��� M���� �ٿ��� �ٱ����� ������ �������� ����� ����� �־�����. ����� i j�� ��Ÿ����, 
				�������κ��� i��° �ٱ��Ϻ��� j��° �ٱ����� ������ �������� ����ٴ� ���̴�. (1 �� i �� j �� N)
				�����̴� �Է����� �־��� ������� �ٱ����� ������ �ٲ۴�.
		Output)	��� ������ �ٲ� ������, ���� ���ʿ� �ִ� �ٱ��Ϻ��� �ٱ��Ͽ� �����ִ� ������ �������� ������ ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M;

	cin >> N >> M;

	vector<int> arr(N);
	for (int i = 0; i < N; ++i)
		arr[i] = i + 1;

	int left, right;
	while (M-- > 0)
	{
		cin >> left >> right;
		--left, --right;
		while (left <= right)
		{
			swap(arr[left], arr[right]);
			++left;
			--right;
		}

	}
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));

	return 0;
}