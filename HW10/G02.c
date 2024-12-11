#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nextLetter(char *ch){
	(*ch)++;
}

void nextDigit(char *ch){
	if(*ch == '8'){
		*ch = '2';
	}else{
		*ch +=2;
	}
}

int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	char buffer[256];
	int i = 0;
	
	char ch;
	int length = 0;
	ch = getc(fin);
	
	while ( ch != EOF && ch != '\n' )
	{
		buffer[i++] = ch;
		length++;
		
		ch = getc(fin);
	}
	buffer[i++] = '\0';
	//printf("%s", buffer);
	
	int needLength = strtol(buffer, NULL, 10);
	
	//printf("\n%d", needLength);
	
	char result[256];
	char currentLetter = 'A';
	char currentDigit = '2';
	int j = 0;
	while(j < needLength){
		result[j++] = currentLetter;
		result[j++] = currentDigit;
		
		nextLetter(&currentLetter);
		nextDigit(&currentDigit);		
	}
	result[j++] = '\0';
	printf("%s", result);
	
	FILE *fout = fopen("output.txt", "w");
	
	j = 0;
	while(result[j] != '\0'){
		putc(result[j], fout);
		j++;
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
