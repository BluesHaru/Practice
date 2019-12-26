/*---------------------------------------------------
	2309 일곱 난쟁이
	BF
	문제정보 :	아홉 명의 난쟁이 중 진짜 일곱 난쟁이를 찾아라.
				난쟁이의 총 키의 합은 100이다.
	조건 :
		Input)	난쟁이들의 키는 각각 다르며, 100 미만의 자연수 이다.
		Output)	일곱 난쟁이의 키를 오름차순 출력, 위 조건을 만족하지 않는 경우는 없다.
----------------------------------------------------*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[9];
	int total = 0;
	for (int i = 0; i < 9; ++i)
	{
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	printf("\n");

	// 미리 난쟁이들의 키를 정렬.
	sort(arr, arr + 9);

	for (int i = 0; i < 9; ++i)
		for (int k = i + 1; k < 9; ++k)
			// 아홉 중 2명의 난쟁이의 키를 뺀 값이 100인지를 체크
			if (i != k && 100 == (total - arr[i] - arr[k]))
			{
				// 조건에 부합한 난쟁이들의 키를 출력 후 리턴
				for (int m = 0; m < 9; ++m)
					if (m != i && m != k)
						printf("%d\n", arr[m]);

				return 0;
			}


	return 0;
}