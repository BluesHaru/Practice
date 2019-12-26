/*---------------------------------------------------
	2750 �� �����ϱ�
	����
	�������� :	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	���� ���� N(1 �� N �� 1,000). �� K (-1000 �� K �� 1,000) ���� �ߺ����� �ʴ´�.
		Output)	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> numbers(N);
	for (int i = 0; i < N; ++i)
		scanf("%d", &numbers[i]);

	sort(numbers.begin(), numbers.end());

	for (auto num : numbers)
		printf("%d\n", num);
	return 0;
}