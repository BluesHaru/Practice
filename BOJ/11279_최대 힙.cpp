/*---------------------------------------------------
	1927_최대 힙
	자료구조
	문제정보 : 입력 시, 힙에 삽입 혹은 가장 큰 수를 빼면서 출력
	조건 :
		Input) 연산 개수 N (1 <= N <= 100,000), 입력 자연수 K (1 <= K < 2^31)
		Output)
----------------------------------------------------*/

//#include <iostream>
//#include <memory.h>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//
//	unsigned int heap[100001];
//	memset(heap, 0, sizeof(heap));
//
//	int idx = 0;
//	int size = 0;
//	int N;
//	unsigned int K;
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> K;
//
//		if (0 == K)	// 출력
//		{
//			if (size != 0)
//			{
//				cout << heap[1] << '\n';
//				heap[1] = heap[size];
//				heap[size--] = 0;
//
//				idx = 1;
//				unsigned int left, right;
//				int l_idx, r_idx;
//				while (idx * 2 <= size)
//				{
//					l_idx = idx * 2;
//					r_idx = idx * 2 + 1;
//					left = heap[idx * 2];
//					right = heap[idx * 2 + 1];
//
//					if (left < heap[idx] && right < heap[idx])
//						break;
//					if (left >= right)
//					{
//						heap[l_idx] = heap[idx];
//						heap[idx] = left;
//						idx = l_idx;
//					}
//					else if (left < right)
//					{
//						heap[r_idx] = heap[idx];
//						heap[idx] = right;
//						idx = r_idx;
//					}
//				}
//			}
//			else
//				cout << 0 << '\n';
//		}
//		else  // 입력
//		{
//			idx = ++size;
//			// 삽입 후 정렬
//			while (1 != idx && (heap[idx / 2] < K))
//			{
//				heap[idx] = heap[idx / 2];
//			
//				idx /= 2;
//			}
//			heap[idx] = K;
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq;
	int N, K;
	cin >> N;
	while(N--)
	{
		cin >> K;
		if (!K && pq.empty())
			cout << "0\n";
		else if (!K)
		{
			cout << pq.top() << '\n';
			pq.pop();
		}
		else
			pq.emplace(K);

	}
	return 0;
}