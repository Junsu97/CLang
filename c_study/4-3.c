#include <stdio.h>

void main()
{
	int a = 10;

	a++;
	printf(" a ++ ==> %d \n", a); //a = a + 1�� ����
	a--;
	printf(" a -- ==> %d \n", a); //a = a - 1�� ����
	a += 5;
	printf(" a +=5 ==> %d \n", a); //a = a + 5�� ����
	a  -= 5;
	printf(" a -=5 ==> %d \n", a); //a = a - 5�� ����
	a *= 5;
	printf(" a *=5 ==> %d \n", a); //a = a * 5�� ����
	a /= 5;
	printf(" a /=5 ==> %d \n", a); //a = a / 5�� ����
	a %= 5;
	printf(" a %%=5 ==> %d \n", a); //a = a % 5�� ����
}
