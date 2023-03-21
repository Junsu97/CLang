#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	printf("%d / %d = %f \n",100,200,0.5);
	printf("%c %c \n",'a','K');
	printf("%s %s \n","안녕","C 언어");

	printf("3초뒤 종료 됩니다.");

	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
}
