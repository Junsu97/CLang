#include<stdio.h>

void gugu(int dan){
	for(int i = 1; i < 10; i++)
		printf("%d x %d = %2d\n",dan,i,dan*i);
}

void main(){
	int dan;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &dan);

	gugu(dan);
}
