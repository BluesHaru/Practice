/*---------------------------------------------------
	1920 �� ã��
	�̺� Ž��
	�������� :	N���� ���� A[1], A[2], ��, A[N]�� �־��� ���� ��, �� �ȿ� X��� ������ �����ϴ��� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	ù° �ٿ� �ڿ��� N(1�� N ��100,000), ���� �ٿ��� N���� ���� A[1], A[2], ��, A[N]�� �־�����. 
				���� �ٿ��� M(1�� M ��100,000)�� �־�����. ���� �ٿ��� M���� ������ �־����µ�, �� ������ A�ȿ� �����ϴ��� �˾Ƴ��� �ȴ�. ��� �������� ������ int �� �Ѵ�.
		Output)	M���� �ٿ� ���� ����Ѵ�. �����ϸ� 1��, �������� ������ 0�� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

vector<int> arr;

int findNum(int num)
{
	int left = 0, right = N-1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] < num)
			left = mid + 1;
		else if (arr[mid] > num)
			right = mid - 1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());

	cin >> M;
	int num;
	for (int i = 0; i < M; ++i)
	{ 
		cin >> num;
		cout << findNum(num) << '\n';
	}

	return 0;
}