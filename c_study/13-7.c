#include<stdio.h>

void main(){
	union student {
		int tot;
		char grade;
	};

	union student u;

	u.tot = 300;
	u.grade = 'A';

	printf("\n---  ����ü Ȱ�� ---\n");
	printf("���� ==> %d\n",u.tot);
	printf("��� ==> %c\n",u.grade);
}
