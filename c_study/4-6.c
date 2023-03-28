#include <stdio.h>

void main()
{
	int a = 99;

	printf(" AND 연산 : %d \n",(a >= 100) && (a <= 200) );//AND연산
	printf(" OR 연산 : %d \n",(a >= 100) || (a <= 200) );//OR연산
	
	printf(" NOT 연산 : %d \n",!(a == 100) );//NOT연산
}
