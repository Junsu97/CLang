#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int a,b,c,d;
	int result;
 
	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&c);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&d);
	
	result = a + b + c + d; 
	printf("%d + %d + %d + %d = %d \n",a,b,c,d,result);
 	
	printf("3초뒤 종료 됩니다.");	
	
	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
}
