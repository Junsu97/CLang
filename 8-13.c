#include<stdio.h>
#include<string.h>
/*
 * gets() : 문자열 입력 함수
 * 1. scanf()와 비슷한 기능으로, 문자열 입력시 상대적으로 유용
 * 2. 최대 입력 문자는 널 문자를 고려해서 배열크기-1 까지 입력
 * 3. Enter키를 입력할 때까지 문자열을 받아들임
 * puts() : 문자열 출력 함수
 * 1. printf()와 비슷한 기능으로, 문자열 출력시 상대적으로 유용
 * 2. \n 없이도 출력후 자동으로 줄 넘김
 * */
void main(){
	char ss[20];
	char tt[20];
	int r1,r2,r3;

	puts("첫번째 문자열을 입력하세요.");
	gets(ss); //배열 ss에 문자열 입력
	
	puts("두번째 문자열을 입력하세요");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);
	r3 = strcmp(ss,tt);
	
	printf("첫번째 문자열의 길이 ==> %d\n",r1);
	printf("두번째 문자열의 길이 ==> %d\n",r2);
	if(r3 == 0){
		puts("두 문자열의 내용이 같습니다.\n");
	}else{
		puts("두 문자열의 내용이 다릅니다.\n");
	}
}
