#include <stdio.h>

void main()
{
	int a = 10, b;

	b = a++;
	printf(" %d \n",b); // b = a�� ������ �� a�� 1 ������Ŵ

	b = ++a;
	printf(" %d \n", b);//a�� 1������Ų �� b=a�� ����
}
