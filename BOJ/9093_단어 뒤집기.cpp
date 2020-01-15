/*---------------------------------------------------
	9093 �ܾ� ������
	���ڿ�
	�������� :	������ �־����� ��, �ܾ ��� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
				��, �ܾ��� ������ �ٲ� �� ����. �ܾ�� ���� ���ĺ����θ� �̷���� �ִ�.
	���� :
		Input)	ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, ������ �ϳ� �־�����. 
				�ܾ��� ���̴� �ִ� 20, ������ ���̴� �ִ� 1000�̴�. �ܾ�� �ܾ� ���̿��� ������ �ϳ� �ִ�.
		Output)	�� �׽�Ʈ ���̽��� ���ؼ�, �Է����� �־��� ������ �ܾ ��� ������ ����Ѵ�.
----------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // For BaekJoon

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	cin.ignore();
	stringstream ss;
	while (N-- > 0)
	{
		string s;
		getline(cin, s);
		ss.str(s);
		
		while (ss >> s)
		{
			reverse(s.begin(), s.end());
			cout << s << ' ';
		}
		ss.clear();
		cout << '\n';
	}

	return 0;
}