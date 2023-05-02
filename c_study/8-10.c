#include<string.h>
#include<stdio.h>

void main(){
	char ss[4];//널문자 \0의 자리를 만들기 위해 크기를 4로 생성

	
	strcpy(ss,"XYZ");//문자열 복사함수 strcpy
	
	printf("문자열 ss의 내용 ==> %s \n", ss);
}
