#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(){
	struct student{
		char name[10];
		int age;
	};
	
	int count;
	
	printf("입력할 학생 수 : ");
	scanf("%d",&count);
	struct student *p;
	struct student s;
	p = (struct student*) malloc(sizeof(s) * count);

	
	for(int i = 0; i < count; i++){
		printf("이름과 나이 입력 : ");
		scanf("%s %d",p[i].name,&p[i].age);	
	}

	for(int i = 0; i < count; i++){
		printf("이름 : %s , 나이 : %d \n", p[i].name,p[i].age);
	
	}
}
