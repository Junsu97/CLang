#include<stdio.h>
#include<time.h>
void main()
{
	unsigned int years;
	printf("���ڸ� �Է����ּ���.");
	scanf("%u",&years);

	if(years == 4 || years%400 == 0 || years % 100 != 0)
	{
		printf("%u ����(��) �����Դϴ�.\n",years);
	}
	else
	{
		printf("%u ����(��) ������ �ƴմϴ�.\n",years);
	}

	printf("3�ʵ� ����˴ϴ�.");
	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
	
	
}