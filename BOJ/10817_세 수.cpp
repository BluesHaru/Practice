/*---------------------------------------------------
	10817 �� ��
	����
	�������� :	�� ���� A, B, C�� �־�����. �̶�, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	���� :
		Input)	ù° �ٿ� �� ���� A, B, C�� �������� ���еǾ� �־�����. (1 �� A, B, C �� 100)
		Output)	�� ��°�� ū ������ ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	multiset<int> num = { A,B,C };

	cout << *(++num.begin()) << '\n';

	return 0;
}