#include<stdio.h>
#include<string.h>
void main()
{
	int x;
	int y;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d",&x);
	printf("�� �Է� : ");
	
	
	switch(x){
	case 1: 
		scanf("%d",&y);
			
		break;
	case 2: 
		scanf("%x",&y);
		break;
	case 3: 
		scanf("%o",&y);
		break;
	default : 
		break;
	}
	
		printf("10���� ==> %d\n",y);
		printf("16���� ==> %X\n",y);
		printf("8���� ==> %o\n",y);
	
}
