#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main(){
	struct student{
		char name[10];
		int age;
	};

	struct student s;
	struct student *p;
	int count;
	printf("입력할 학생 수 : ");
	scanf("%d",&count);
	
	p = (struct student*)malloc(sizeof(s) * count);

	for(int i = 0;  i < count; i++){
		printf("이름과 나이 입력 : ");
		scanf("%s %d",p[i].name, &p[i].age);
	}

	printf("\n\n-- 학생 명단 --\n");
	for(int i = 0; i < count; i++){
		printf("이름: %s , 나이:%d \n",p[i].name, p[i].age);
	}

	for(int i = 0; i < count; i++){
		free(p+i);
	}
	
		
}
