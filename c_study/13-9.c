#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(){
	struct student{
		char name[10];
		int age;
	};
	
	int count;
	
	printf("�Է��� �л� �� : ");
	scanf("%d",&count);
	struct student *p;
	struct student s;
	p = (struct student*) malloc(sizeof(s) * count);

	
	for(int i = 0; i < count; i++){
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d",p[i].name,&p[i].age);	
	}

	for(int i = 0; i < count; i++){
		printf("�̸� : %s , ���� : %d \n", p[i].name,p[i].age);
	
	}
}
