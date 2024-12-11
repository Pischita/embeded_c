#include <stdio.h>
#include <string.h>


int main(void){
	
	char *filename = "input.txt";
	
	char buffer[256];
	
	FILE *fr= fopen(filename, "r");
	
	
	char * filenameOutput = "output.txt";
	FILE *fw = fopen(filenameOutput, "w");
	
	
	if(fr){
		while( (fgets(buffer, 256, fr))!=NULL)
		{
			int len = strlen(buffer);
			if(buffer[len-1] == '\n'){
				buffer[len-1] = '\0';
				len = strlen(buffer);
			}
			
			for(int i = 0; i < 3; i++){
				if(i != 0) {
					fputs(", ", fw);
				}
				fputs(buffer, fw);
				
			}
			char lenstr [10];
			snprintf(lenstr, sizeof lenstr, "%d", len);
			fputs(" ", fw);
			fputs( lenstr, fw);
			
		}
		
		fclose(fr);
		fclose(fw);
	}
	
	return 0;
}
