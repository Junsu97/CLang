#include<stdio.h>

void main(){
	enum week {sun, mon, tue, wed, thu, fri, sat};
	enum week ww;
	ww = sat;

	//if(ww = sun)
	if(ww = 0)
		printf("������ �Ͽ��� �Դϴ�.\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n");
}
