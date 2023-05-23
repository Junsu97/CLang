#include<stdio.h>

void main(){
	FILE *wfp;
	wfp = fopen("c:\\c_study\\gugu.txt","w");
	int i, j, n;
	fprintf(wfp,"#力2窜#\t\t#力3窜#\t\t#力4窜#\t\t#力5窜#\t\t#力6窜#\t\t#力7窜#\t\t#力8窜#\t\t#力9窜#\n");
	for(i = 1; i < 10; i++){
		for(j = 2; j < 10; j++){
			fprintf(wfp,"%d * %d = %d \t",j,i,j*i);
		}
		fprintf(wfp,"\n");
	}

	fclose(wfp);
}
