#include<stdio.h>

void main(){
	FILE *wfp;
	wfp = fopen("c:\\c_study\\gugu.txt","w");
	int i, j, n;
	fprintf(wfp,"#��2��#\t\t#��3��#\t\t#��4��#\t\t#��5��#\t\t#��6��#\t\t#��7��#\t\t#��8��#\t\t#��9��#\n");
	for(i = 1; i < 10; i++){
		for(j = 2; j < 10; j++){
			fprintf(wfp,"%d * %d = %d \t",j,i,j*i);
		}
		fprintf(wfp,"\n");
	}

	fclose(wfp);
}
