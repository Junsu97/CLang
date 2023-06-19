#include<stdio.h>
#include<string.h>

void main(int argc, char *argv[]){

	if(argc != 3){
		printf("매개변수 2개를 입력해 주세요.");
		return;
	}

	FILE *wfp;
	FILE *rfp;
	char str[200];

	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2], "w");

	while(1){
		fgets(str,199,rfp);

		if(feof(rfp)){
			break;
		}

		fputs(str,wfp);
		printf(str);
	}

	fclose(wfp);
	fclose(rfp);
}
