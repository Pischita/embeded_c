#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	FILE *fout = fopen("output.txt", "w");
	
	char str[1001];
	
	int length = 0;
	char ch = fgetc(fin);
	while ( ch != EOF && ch != '\n' ){
		//printf("%c, %d \n", ch, ch);
		str[length++] = ch;
		ch = fgetc(fin);
	}
	str[length] = '\0';
	//printf("%d ", length);
	char lastLetter = str[length -1];
	//printf("%c", lastLetter);
	for(int i = 0; i < length -1; i++){
		if(str[i] == lastLetter){
			fprintf(fout, "%d ", i);
			printf("%d ", i);	
		}
		
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
