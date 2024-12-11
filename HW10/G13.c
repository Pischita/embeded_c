#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char *inputFilename = "input.txt";
	
	FILE *fin = fopen(inputFilename, "r");
	FILE *fout = fopen("output.txt", "w");
	
	char str[10001];
	
	
	if (fscanf(fin, "%s", str) == 1){
	
		int length = strlen(str);
		
		int j = length -1;
		int extensionPointer = 0;
		
		// поиск последней точки
		while(str[j] != '/'){
			if(str[j] == '.'){
				extensionPointer = j;
				break;
			}
			
			j--;
		}
		int i;
		if(extensionPointer > 0){
			i = extensionPointer;			
		}else{
			i = length;
		}
		str[i++] = '.';
		str[i++] = 'h';
		str[i++] = 't';
		str[i++] = 'm';
		str[i++] = 'l';
		str[i++] = '\0';
		
		fprintf(fout, "%s\n", str);
		printf("%s\n", str);
	}
	
	
	
	
		
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
