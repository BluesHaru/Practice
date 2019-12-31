/*---------------------------------------------------
	7785 ȸ�翡 �ִ� ���
	�ڷᱸ��, ���ڿ�
	�������� :	�αװ� �־����� ��, ���� ȸ�翡 �ִ� ��� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�α׿� ��ϵ� ���� ����� �� n (2 �� n �� 10^6)
				���� ����� ������� �־�����, �� ����� �̸��� �־����� "enter"�� "leave"�� �־�����. 
				"enter"�� ���� ���, "leave"�� ���� ����̴�.
		Output)	���� ȸ�翡 �ִ� ����� �̸��� ���� ���� �������� �� �ٿ� �� �� ����Ѵ�.
----------------------------------------------------*/
#pragma warning(disable:4996)

#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <functional>	

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<string, greater<string>> temp;

	stringstream ss;

	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		string str = "";
		getline(cin, str);
		ss.str(str);
		string word, input;
		ss >> word >> input;

		if (input == "enter")
			temp.emplace(word);
		else
			temp.erase(word);

		ss.clear();
	}

	for (auto s : temp)
		cout << s << '\n';

	return 0;
}