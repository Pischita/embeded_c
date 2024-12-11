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
	
	int big = 0;
	int small = 0;
	for(int i = 0; i < length; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			small++;
		}else if(str[i] >= 'A' && str[i] <= 'Z' ){
			big++;
		}
	}
	
	
	fprintf(fout, "%d %d", small, big);
	
	
	printf("%d %d", small, big);	
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
