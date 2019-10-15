/*---------------------------------------------------
	11720 ������ ��
	�����
	���� : N���� ���ڰ� ���� ���� �����ִ�. 
		   �� ���ڸ� ��� ���ؼ� ����϶�
	���� : 
		Input) ������ ���� N (1 <= N <= 100)
----------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N; string M;
	cin >> N >> M;
	long long answer = 0;
	for(int i = 0; i < N; ++i)
	{
		if(M[i] != '0')
			answer += ((M[i] - '0') % 10);
	}
	cout << answer << '\n';

	return 0;
}