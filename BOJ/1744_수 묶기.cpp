/*---------------------------------------------------
	1744 �� ����
	�׸���
	�������� : ���� ���� �ִ��� ���� ������.
	���� :
		Input) ������ ũ�� N (N < 10,000), ������ �� K (-10,000 �� K �� 10,000)
		Output) answer <= 2^31
----------------------------------------------------*/

//#include <bits/stdc++.h> << �����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, answer = 0, zero = 0, K;
	cin >> N;
	vector<int> posit, negit;
	posit.reserve(N);
	negit.reserve(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> K;
		if (K > 1)
			posit.emplace_back(K);
		else if (K < 0)
			negit.emplace_back(K);
		else if (K == 0)
			++zero;
		else if (K == 1)
			++answer;
	}
		
	sort(posit.begin(), posit.end(), greater<int>());
	sort(negit.begin(), negit.end());
	int i = 0;
	int pSize = posit.size();
	for (; i < pSize;)
	{
		if (i + 1 < pSize)
		{
			answer += posit[i] * posit[i + 1];
			i += 2;
		}
		else
			answer += posit[i++];
	}
	int nSize = negit.size();
	for (i = 0; i < nSize;)
	{
		if (i + 1 < nSize)
		{
			answer += negit[i] * negit[i + 1];
			i += 2;
		}
		else if (zero == 0)
			answer += negit[i++];
		else
			++i;
	}

	cout << answer << '\n';

	return 0;
}