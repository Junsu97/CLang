#include<stdio.h>
#include<string.h>
void main()
{
	int x;
	int y;

	printf("입력진수 결졍 <1>10 <2>16 <3>8 : ");
	scanf("%d",&x);
	printf("값 입력 : ");
	
	
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
	
		printf("10진수 ==> %d\n",y);
		printf("16진수 ==> %X\n",y);
		printf("8진수 ==> %o\n",y);
	
}
