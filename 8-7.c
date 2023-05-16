#include <stdio.h>

void main(){
	char str[8] = "Basic-C";
	int i;

	str[5] = '#';

	for(int i = 0; i < 8; i++){
		printf("str[%d] ==> %c \n",i, str[i]);
	}

	printf("문자열 배열 str ==> %s\n",str);
}
