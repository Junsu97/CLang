#include<stdio.h>

void main(){



	int i,k;
	for(i = 2; i < 10; i++){
		printf("#제%d단#\t\t",i); // 컬럼 출력
	}
	printf("\n");
	for(i = 2,k = 1; k <10; i++){ //i = 단 k = 곱 

		if(i == 10){ // 단수가 0이 되면 단수 i 를 2로 초기화 하고 곱 k를 1증가 시켜준 후 줄넘김 
			i = 2;
			k++;
			printf("\n");
		}
		
		if(k == 10){ 
			return; //반복문 내에서 k값을 증가 시켰기 때문에 2 * 10 을 출력하지 않기 위해 탈출 조건식을 걸음
		}

		printf("%d X %d = %d\t",i , k , i*k);
	}
}
