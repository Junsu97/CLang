#include<stdio.h>

void main(){
	int arr[4];
	int hap = 0;
	int i;

	for(i = 0; i <=3; i++){
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
		scanf("%d",&arr[i]);
	}

	hap = arr[0] + arr[1] + arr[2] + arr[3];
	printf("�հ� ==> %d\n",hap);
}
