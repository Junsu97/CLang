#include<stdio.h>

void main(){
	int a, b;
	int *p1;
	int *p2;
	int tmp;
	printf("a�� �Է� : ");
	scanf("%d", &a);
	printf("b�� �Է� : ");
	scanf("%d", &b);
	
	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = *p1;

	printf("�ٲ� �� a�� %d, b�� %d",*p1,*p2);
}