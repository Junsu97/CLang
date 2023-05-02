#include<stdio.h>

void main(){
	int gugu[8][9];
	//구구단 값 저장
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 9; j++){
			gugu[i][j] = (i+2) * (j+1);
		}
	}
	//출력
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 8; j++){
			printf("%d X %d = %d\t",j+2,i+1,gugu[j][i]);
		}
		printf("\n");
	}
}
