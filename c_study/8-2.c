#include <stdio.h>

void main(){
	int arr[4];
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &arr[0]);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &arr[1]);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &arr[2]);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &arr[3]);

	hap = arr[0]+arr[1]+arr[2]+arr[3];
	printf(" �հ� ==> %d\n",hap);
}
