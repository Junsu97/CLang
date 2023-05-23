#include<stdio.h>
void func1(char a, char b){
	        int imsi;

		        imsi = a;
			        a = b;
				        b = imsi;
}

void main(){
	char x='A',y='Z';
	func1(x,y);
	printf("x=%c, y=%c",x,y);
}
