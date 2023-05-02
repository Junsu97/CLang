#include<stdio.h>
#include<string.h>

void main(){
	char ss[7] = "XYZ";

	strcat(ss,"ABC"); //strcat() 두 문자열을 이어주는 함수
	//기존의 \0 자리부터 이어지고 널문자는 맨 뒤로 옮겨짐

	printf("이어진 문자열 ss의 내용 ==> %s \n",ss);
}
