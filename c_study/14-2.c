#include<stdio.h>

void main(int argc, char* argv[]){
	char str[200];
	FILE *rfp;

	if(argc != 2){
		printf("\n --  매개변수를 2개 입력해주세요. --\n");
		return;
	}

	rfp = fopen(argv[1],"r");

	for(;;){
		fgets(str, 199, rfp);

		if(feof(rfp))
			break;
		printf("%s",str);
	}

	fclose(rfp);
}
