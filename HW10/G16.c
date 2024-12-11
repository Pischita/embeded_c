#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void str_replace(char *str, char *fnd, char * repl){
	
	

	char *s = strstr(str, fnd);
	while( (s = strstr(str, fnd)) != NULL){
		char buffer[2000] = {0};
		strncpy(buffer, str, strlen(str) - strlen(s) ); 
		printf("%s \n", buffer);
		buffer[strlen(buffer)] = '\0';
		
		strcat(buffer, repl);
		printf("%s \n", buffer);
		strcat(buffer,s+strlen(fnd));
		printf("%s \n", buffer);
		strcpy(str, buffer);
		printf("%s \n", str);
		
		strcpy(buffer, "");
		
		
	}
	
	
}

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
	
	str_replace(str, "Ling", "Cao");
	fprintf(fout, "%s", str);
		
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
