#include<stdio.h>
#include<string.h>

void main(){
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;

	r = strcmp(ss,tt);//strcmp()�Լ��� �� ���ڿ��� ���ؼ� ������ 0 �ٸ��� �� ���� ����(�� ���ڿ��� �ƽ�Ű �ڵ� �� ����)
	printf("�� ���ڿ��� �񱳰�� ==> %d\n",r);
}