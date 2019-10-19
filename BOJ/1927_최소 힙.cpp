/*---------------------------------------------------
	1927_최소 힙
	자료구조
	문제정보 : 입력 시, 힙에 삽입 혹은 가장 작은 수를 빼면서 출력
	조건 :
		Input) 연산 개수 N (1 <= N <= 100,000), 입력 자연수 K (1 <= K < 2^31)
		Output)
----------------------------------------------------*/

#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unsigned int heap[100001];
	memset(heap, -1, sizeof(heap));
	
	int idx = 0;
	int size = 0;
	int N;
	unsigned int K;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> K;
		
		if (0 == K)	// 출력
		{
			if (size != 0)
			{
				cout << heap[1] << '\n';
				heap[1] = heap[size];
				heap[size--] = -1;

				idx = 1;
				unsigned int left, right;
				int l_idx, r_idx;
				while (idx <= size)
				{
					l_idx = idx * 2;
					r_idx = idx * 2 + 1;
					if (l_idx > size)
						break;
					left = heap[idx * 2];
					right = heap[idx * 2 + 1];

					if (left < right)
					{
						if (left < heap[idx])
						{
							int temp = heap[idx];
							heap[idx] = left;
							heap[l_idx] = temp;
							idx = l_idx;
						}
						else
							break;
					}
					else
					{
						if (right < heap[idx])
						{
							int temp = heap[idx];
							heap[idx] = right;
							heap[r_idx] = temp;
							idx = r_idx;
						}
						else
							break;
					}
				}
			}
			else
				cout << 0 << '\n';
		}
		else // 입력
		{
			heap[++size] = K;
			idx = size;
			// 삽입 후 정렬
			while (1 < idx && (heap[idx / 2] > heap[idx]))
			{
				int temp = heap[idx];
				heap[idx] = heap[idx / 2];
				heap[idx / 2] = temp;

				idx /= 2;
			}
		}
	}
	return 0;
}