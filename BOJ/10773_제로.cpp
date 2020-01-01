/*---------------------------------------------------
	10773 ����
	����, ����
	�������� :	�����̴� �߸��� ���� �θ� ������ 0�� ���ļ�, ���� �ֱٿ� ����̰� �� ���� ����� ��Ų��.
				����̴� �̷��� ��� ���� �޾� ���� �� �� ���� ���� �˰� �;� �Ѵ�. ����̸� ��������!
	���� :
		Input)	���� K (1 �� K �� 100,000), K���� �ٿ� ���� N, (0 �� N �� 1,000,000)
				������ "0" �� ��쿡�� ���� �ֱٿ� �� ���� �����, �ƴ� ��� �ش� ���� ����.
				������ "0"�� ��쿡 ���� �� �ִ� ���� ������ ������ �� �ִ�.
		Output)	����̰� ���������� ���� �� ���� ���� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int temp;
	stack<int> numbers;

	int result = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> temp;
		
		if (temp)
		{
			numbers.emplace(temp);
			result += temp;
		}
		else if (!numbers.empty())
		{
			temp = numbers.top();
			numbers.pop();
			result -= temp;
		}
	}

	cout << result << '\n';

	return 0;
}