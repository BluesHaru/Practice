/*---------------------------------------------------
	2108 �����
	����
	�������� :	���� ó���ϴ� ���� ����п��� ����� �߿��� ���̴�. ����п��� N���� ���� ��ǥ�ϴ� �⺻ ��谪���� ������ ���� �͵��� �ִ�. ��, N�� Ȧ����� ��������.
				1.������ : N���� ������ ���� N���� ���� ��
				2.�߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
				3.�ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
				4.���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����
				N���� ���� �־����� ��, �� ���� �⺻ ��谪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	���� ���� N(1 �� N �� 500,000) �� ���� N���� �ٿ��� �������� �־�����. �ԷµǴ� ������ ������ 4,000�� ���� �ʴ´�.
		Output)	ù° �ٿ��� �������� ����Ѵ�. �Ҽ��� ���� ù° �ڸ����� �ݿø��� ���� ����Ѵ�.
				��° �ٿ��� �߾Ӱ��� ����Ѵ�.
				��° �ٿ��� �ֺ��� ����Ѵ�. ���� �� ���� ������ �ֺ� �� �� ��°�� ���� ���� ����Ѵ�.
				��° �ٿ��� ������ ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct myPair
{
	myPair() : first(8001), second(0) {}
	int first;
	int second;
};

myPair arr[8001];
int middle[500001];

int main()
{
	int N;

	scanf("%d", &N);
	double sum = 0;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &middle[i]);
		sum += middle[i];
		int idx = middle[i] + 4000;
		if(8001 == arr[idx].first) arr[idx].first = idx;
		++arr[idx].second;
	}
	sort(middle, middle + N);
	sort(arr, arr + 8001, [](myPair &a, myPair &b)
	{
		if (a.second > b.second)
			return true;
		else if (a.second == b.second && a.first < b.first)
			return true;

		return false;
	});
	sum = floor(sum / N + 0.5);
	printf("%d\n", (int)sum);
	
	printf("%d\n", middle[N / 2]);
	
	printf("%d\n", (arr[0].second == arr[1].second ? arr[1].first : arr[0].first) - 4000);

	printf("%d\n", middle[N-1] - middle[0]);
	return 0;
}