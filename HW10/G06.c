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
	
	
	
	int i = 0;
	int j = length -1;
	int result = 1;
	while(i < j){
		
		if(str[i] != str[j]){
			result = 0;
			break;
		}
		
		i++;
		j--;
	}		
	
	if(result > 0){
		fprintf(fout, "%s", "YES");
	}else{
		fprintf(fout, "%s", "NO");
	}
	
	printf("%d\n", result);	
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
