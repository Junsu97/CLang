#include<stdio.h>
#include<string.h>

void main(){
	char ss[7] = "XYZ";

	strcat(ss,"ABC"); //strcat() �� ���ڿ��� �̾��ִ� �Լ�
	//������ \0 �ڸ����� �̾����� �ι��ڴ� �� �ڷ� �Ű���

	printf("�̾��� ���ڿ� ss�� ���� ==> %s \n",ss);
}
