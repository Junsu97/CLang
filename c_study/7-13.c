#include<stdio.h>

void main(){
	int a,b,c,result=0;
	printf("�հ��� ���۰� ==> ");
	scanf("%d", &a);
	printf("�հ��� ���� ==> ");
	scanf("%d", &b);
	printf("��� ==> ");
	scanf("%d", &c);

	for(int i = a; i <=b; i++){
		if(i % c == 0){	
			result += i; 
		}
	}

	printf("%d���� %d������ %d����� �հ� ==> %d",a,b,c,result);
}