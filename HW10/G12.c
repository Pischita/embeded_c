#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	FILE *fout = fopen("output.txt", "w");
	
	char str[10001];
	
	while (fscanf(fin, "%s", str) == 1){
		fprintf(fout, "%s\n", str);
		printf("%s\n", str);
	}
	
	
	
	
		
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
