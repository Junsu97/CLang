#include <stdio.h>

void main()
{
	int a = 10, b;

	b = a++;
	printf(" %d \n",b); // b = a를 수행한 후 a를 1 증가시킴

	b = ++a;
	printf(" %d \n", b);//a를 1증가시킨 후 b=a를 수행
}
