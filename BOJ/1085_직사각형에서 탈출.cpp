/*---------------------------------------------------
	1085 ���簢������ Ż��
	����, ����
	�������� :	�Ѽ��� ���� (x, y)�� �ִ�. ���簢���� ���� �Ʒ� �������� (0, 0)�� �ְ�, 
				������ �� �������� (w, h)�� �ִ�. ���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� :
		Input)	�ڿ��� x y w h (w, h �� 1,000) (1 �� x �� w-1) (1 �� y �� h-1)
		Output)
----------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	
	int result = x;

	if (result > y) result = y;
	if (result > w - x) result = w - x;
	if (result > h - y) result = h - y;
	
	printf("%d", result);

	return 0;
}