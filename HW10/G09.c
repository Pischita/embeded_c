#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	FILE *fout = fopen("output.txt", "w");
	
	char str[10001];
	
	int length = 0;
	char ch = fgetc(fin);
	while ( ch != EOF && ch != '\n' ){
		//printf("%c, %d \n", ch, ch);
		str[length++] = ch;
		ch = fgetc(fin);
	}
	str[length] = '\0';
	
	
	for(int i = 0; i < length; i++){
		if(str[i] == ' '){
			str[i] = '^';	
		}
		
		if(str[i] == '^'){
			continue;
		}
		
		for(int j = i+1; j < length; j++){
			if(str[i] == str[j]){
				str[j] = '^';	
			}
		}
		
	}
	
	char result[10001];
	int resIndex = 0;
	for(int i = 0; i < length; i++){
		if(str[i] == '^'){
			continue;
		}
		
		result[resIndex++] = str[i];
	}
	
	result[resIndex++] = '\0';
	
	
	
	fprintf(fout, "%s", result);
	
	
	printf("%s", result);	
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
