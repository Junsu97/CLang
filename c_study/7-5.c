#include <stdio.h>

void main(){
	int a = 100;

	while(a == 200){ // 조건식을 먼저 판단하므로 while문 내부가 실행되지 않음
		printf("while 문 내부에 들어 왔습니다. \n");
	}do{
		printf("do ~ while문 내부에 들어 왔습니다.\n");
	}while(a == 200);//먼저 문장을 실핸한 후 조건식을 판단하므로 do~while문 내부가 실행됨
}
