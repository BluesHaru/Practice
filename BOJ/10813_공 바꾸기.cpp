/*---------------------------------------------------
	10813 ���ٲٱ�
	����
	�������� :	���� ��� �ٲ����� �־����� ��, M�� ���� �ٲ� ���Ŀ� �� �ٱ��Ͽ� � ���� ����ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� N (1 �� N �� 100)�� M (1 �� M �� 100)�� �־�����.
				��° �ٺ��� M���� �ٿ� ���ļ� ���� ��ȯ�� ����� �־�����. �� ����� �� ���� i j�� �̷���� ������, 
				i�� �ٱ��Ͽ� j�� �ٱ��Ͽ� ����ִ� ���� ��ȯ�Ѵٴ� ���̴�. (1 �� i �� j �� N)
				�����̴� �Է����� �־��� ������� ���� ��ȯ�Ѵ�.
		Output)	1�� �ٱ��Ϻ��� N�� �ٱ��Ͽ� ����ִ� ���� ��ȣ�� �������� ������ ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

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

	int fir, sec;
	while (M-- > 0)
	{
		cin >> fir >> sec;
		swap(arr[fir - 1], arr[sec - 1]);
	}
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));

	return 0;
}