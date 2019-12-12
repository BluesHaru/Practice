/*---------------------------------------------------
	10699 오늘 날짜
	입출력
	문제정보 :	서울의 오늘 날짜를 출력하라
----------------------------------------------------*/
#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(nullptr);
	
	tm m = *localtime(&t);

	printf("%d-", m.tm_year + 1900);
	if(m.tm_mon + 1 < 10)
		printf("0");
	printf("%d-", m.tm_mon + 1);

	if(m.tm_mday < 10)
		printf("0");

	printf("%d\n", m.tm_mday);

	return 0;
}