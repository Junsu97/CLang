#include<stdio.h>
#include<string.h>

void main(){
	char ss[] = "XYZ";
	int len;

	len = strlen(ss);//strlen���ڿ� �迭�� ���̸� ����
	//�� ���ڸ� ������ ������ ������ ����.

	printf("���ڿ� \"%s\"�� ���� ==> %d \n",ss,len);
}