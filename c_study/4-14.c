#include<stdio.h>
#include<time.h>
void main()
{
	unsigned int years;
	printf("숫자를 입력해주세요.");
	scanf("%u",&years);

	if((years % 4 == 0 && years % 400 == 0) || years % 100 != 0)
	{
		printf("%u 년은(는) 윤년입니다.\n",years);
	}
	else
	{
		printf("%u 년은(는) 윤년이 아닙니다.\n",years);
	}

	printf("3초뒤 종료됩니다.");
	time_t startTime = time(NULL);
	while(time(NULL) - startTime < 3){}
	
	
}
