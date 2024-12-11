#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	FILE *fout = fopen("output.txt", "w");
	
	//char str[10001];
	
	char lastName[80];
	if (fscanf(fin, "%s", lastName) == 1){
		//printf("%s", lastName);
	}
	
	char firstName[80];
	if (fscanf(fin, "%s", firstName) == 1){
		//printf("%s", firstName);
	}
	
	fprintf(fout, "Hello, %s %s!", firstName, lastName);
	printf("Hello, %s %s!", firstName, lastName);
	
	
	
	
	
		
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
