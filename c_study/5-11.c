#include <stdio.h>
#include<time.h>

void main()
{
	char a;
	int x;
	int y;
	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d",&x);
	scanf(" %c ",&a);
	scanf("%d",&y);
	
	switch(a)
	{
		case '+': 
		       	printf("%d %c %d = %d �Դϴ�.\n",x,a,y,(x + y));
		       	break;
		case '-': 
		       	printf("%d %c %d = %d �Դϴ�.\n",x,a,y,(x - y));
		       	break;
		case '/': 
		       	printf("%d %c %d = %d �Դϴ�.\n",x,a,y,(x / y));
		       	break;
		case '*':
		       	printf("%d %c %d = %d �Դϴ�.\n",x,a,y,(x * y));
		       	break;
		case '%':
		       	printf("%d %c %d = %d �Դϴ�.\n",x,a,y,(x % y));
		       	break;
		default :
		       printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");	
				   

	}
	printf("3�ʵ� ����˴ϴ�.");
	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
}
