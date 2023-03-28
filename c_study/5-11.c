#include <stdio.h>
#include<time.h>

void main()
{
	char a;
	int x;
	int y;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d",&x);
	scanf(" %c ",&a);
	scanf("%d",&y);
	
	switch(a)
	{
		case '+': 
		       	printf("%d %c %d = %d 입니다.\n",x,a,y,(x + y));
		       	break;
		case '-': 
		       	printf("%d %c %d = %d 입니다.\n",x,a,y,(x - y));
		       	break;
		case '/': 
		       	printf("%d %c %d = %d 입니다.\n",x,a,y,(x / y));
		       	break;
		case '*':
		       	printf("%d %c %d = %d 입니다.\n",x,a,y,(x * y));
		       	break;
		case '%':
		       	printf("%d %c %d = %d 입니다.\n",x,a,y,(x % y));
		       	break;
		default :
		       printf("연산자를 잘못 입력했습니다.\n");	
				   

	}
	printf("3초뒤 종료됩니다.");
	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
}
