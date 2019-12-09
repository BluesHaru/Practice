/*---------------------------------------------------
	4344 평균은 넘겠지
	수학, 구현(배열)
	문제정보 :	대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
	조건 :
		Input)	테스트 케이스의 개수 C
				학생의 수 N(1 ≤ N ≤ 1000, N은 정수), 점수 G (0 ≤ G ≤ 100, N은 정수)
		Output)	각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력
----------------------------------------------------*/

//#include <bits/stdc++.h> << 제출용
#include <iostream>

using namespace std;

int main()
{
	int C, N, stu[1000];
	scanf_s("%d", &C);
	for (int i = 0; i < C; ++i)
	{
		scanf_s("%d", &N);
		int total = 0;
		float result = 0;
		for (int k = 0; k < N; ++k)
		{
			scanf_s("%d", &stu[k]);
			total += stu[k];
		}
		total /= N;
		for (int k = 0; k < N; ++k)
			if (stu[k] > total) ++result;

		result = result / N * 100;
		printf("%.3f%%\n", result);
	}

	return 0;
}