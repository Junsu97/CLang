#include<stdio.h>
#include<string.h>

void main(){
	char ss[] = "XYZ";
	int len;

	len = strlen(ss);//strlen문자열 배열의 길이를 구함
	//널 문자를 제외한 문자의 개수만 센다.

	printf("문자열 \"%s\"의 길이 ==> %d \n",ss,len);
}
