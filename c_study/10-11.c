#include<stdio.h>

void gugu(int dan){
	int result;
	for(int i=1; i < 10; i++){
		result = dan * i;
		printf("%d X %d = %d \n",dan,i,result);
	}
}

void main(){
	int dan;
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &dan);

	gugu(dan);
}