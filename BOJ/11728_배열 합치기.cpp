/*---------------------------------------------------
	11728 배열 합치기
	BF, 규칙
	문제정보 : 정렬 되어있는 두 배열을 합친 다음 정렬해서 출력하는 프로그램을 작성하시오.
	조건 :
		Input)	A,B 배열의 크기 N, M (1 <= N,M <= 1,000,000)
				배열의 들어가는 수 K (절대값, K <= 10^9)
----------------------------------------------------*/

#include <iostream>

using namespace std;

constexpr int MAX = 1000000;
int A[MAX];
int B[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	// 입력
	for (int i = 0; i < N; ++i)
		cin >> A[i];

	for (int j = 0; j < M; ++j)
		cin >> B[j];

	int idxA = 0, idxB = 0;

	while (true)
	{
		// A,B의 데이터가 모두 있을 경우,
		if (idxA < N && idxB < M)
		{
			if (A[idxA] < B[idxB])
				cout << A[idxA++] << ' ';
			else
				cout << B[idxB++] << ' ';
		}
		// A만 남았을 경우,
		else if (idxA < N)
			cout << A[idxA++] << ' ';
		// B만 남았을 경우,
		else if (idxB < M)
			cout << B[idxB++] << ' ';
		// 아무 것도 남지 않았을 경우는 빠져나간다.
		else
			break;
	}

	return 0;
}