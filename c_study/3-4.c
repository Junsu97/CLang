#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	printf("%d / %d = %f \n",100,200,0.5);
	printf("%c %c \n",'a','K');
	printf("%s %s \n","�ȳ�","C ���");

	printf("3�ʵ� ���� �˴ϴ�.");

	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
}
