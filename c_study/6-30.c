#include<stdio.h>

void main(){
	int i,k;

	for(int i = 1,k=2; k<10; i++){
		if(i==10){
			k++;
			i = 1;
			if(k == 10){
				return;
			}
		}
		printf("%d X %d = %d\n",k,i,k*i);
	}
}

