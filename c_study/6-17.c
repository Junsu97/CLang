#include<stdio.h>

void main(){



	int i,k;
	for(i = 2; i < 10; i++){
		printf("#��%d��#\t\t",i); // �÷� ���
	}
	printf("\n");
	for(i = 2,k = 1; k <10; i++){ //i = �� k = �� 

		if(i == 10){ // �ܼ��� 0�� �Ǹ� �ܼ� i �� 2�� �ʱ�ȭ �ϰ� �� k�� 1���� ������ �� �ٳѱ� 
			i = 2;
			k++;
			printf("\n");
		}
		
		if(k == 10){ 
			return; //�ݺ��� ������ k���� ���� ���ױ� ������ 2 * 10 �� ������� �ʱ� ���� Ż�� ���ǽ��� ����
		}

		printf("%d X %d = %d\t",i , k , i*k);
	}
}