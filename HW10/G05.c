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
	
	
	
	for(int i = 0; i < length ; i++){
		if(str[i] == 'a'){
			str[i] = 'b';
		}else if(str[i] == 'b'){
			str[i] = 'a';
		}else if(str[i] == 'A'){
			str[i] = 'B';
		}else if(str[i] == 'B'){
			str[i] = 'A';
		}		
	}
	
	fprintf(fout, "%s", str);
	printf("%s\n", str);
	
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
