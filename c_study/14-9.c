#include<stdio.h>

void main(int argc, char *argv[]){
	char str[200];
	FILE *rfp;
	FILE *wfp;

	if(argc != 3){
		printf("--매개변수를 2개 넣어주세요");
		return;
	}


	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2],"w");
	for(;;){
		fgets(str, 199, rfp);

		if(feof(rfp))
			break;
		fputs(str,wfp);
	}
	

	fclose(rfp);
	fclose(wfp);
}
