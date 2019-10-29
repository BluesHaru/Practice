/*---------------------------------------------------
	1931 ȸ�ǽǹ���
	�׸��� 
	�������� : �ִ�� ����� �� �ִ� ȸ�� ���� ���
	���� :
		Input)	ȸ���� �� N(1 �� N �� 100,000), 
				���� �ð�, ������ �ð� K (1 <= K <+ 2^31 - 1) or 0

	// ȸ�ǽð��� ª���鼭�� ���� ������ ������ �����غ���.
----------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lastTIme;
int answer;


struct meetTime
{
	int st;
	int ed;
};

bool Cmp(meetTime &a, meetTime &b)
{
	if (a.ed == b.ed)
		return a.st < b.st;

	return a.ed < b.ed;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	vector<meetTime> meetings(N);

	for (int i = 0; i < N; ++i)
		cin >> meetings[i].st >> meetings[i].ed;

	sort(meetings.begin(), meetings.end(), Cmp);

	int n = 0;
	int cnt = 0;
	for (int i = 0; i < N; ++i)
	{
		if (n <= meetings[i].st)
		{
			n = meetings[i].ed;
			++cnt;
		}
	}

	cout << cnt << '\n';

	return 0;
}