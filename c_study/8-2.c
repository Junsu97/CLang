#include <stdio.h>

void main(){
	int arr[4];
	int hap;

	printf("1번째 숫자를 입력하세요 : ");
	scanf("%d", &arr[0]);
	printf("2번째 숫자를 입력하세요 : ");
	scanf("%d", &arr[1]);
	printf("3번째 숫자를 입력하세요 : ");
	scanf("%d", &arr[2]);
	printf("4번째 숫자를 입력하세요 : ");
	scanf("%d", &arr[3]);

	hap = arr[0]+arr[1]+arr[2]+arr[3];
	printf(" 합계 ==> %d\n",hap);
}
