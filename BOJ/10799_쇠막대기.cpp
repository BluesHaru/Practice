/*---------------------------------------------------
	10799 �踷���
	����, ���� �Ƚᵵ �Ǳ� ��. ������ ������
	�������� :	�踷���� �������� ��ġ�� ��Ÿ���� ��ȣ ǥ���� �־����� ��, �߷��� �踷��� ������ �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�� �ٿ� �踷���� �������� ��ġ�� ��Ÿ���� ��ȣ ǥ���� ������� �־�����. ��ȣ ������ ������ �ִ� 100,000�̴�. 
		Output)	�߷��� ������ �� ������ ��Ÿ���� ������ �� �ٿ� ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string N;
	cin >> N;

	int len = N.length();

	int stick = 0;
	int result = 0;

	char prev = N[0];
	for (int i = 1; i < len; ++i)
	{
		if (N[i] == '(' && prev == '(')
			++stick;
		else if (N[i] == ')' && prev == '(')
			result += stick;
		else if(N[i] == ')' && prev == ')')
		{
			--stick;
			++result;
		}
		prev = N[i];
	}

	cout << result << '\n';

	return 0;
}