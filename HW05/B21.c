#include <stdio.h>
#include <stdbool.h>


int main(void){
	char c;
	
	do{
		scanf("%c", &c);
				
		//printf("%c %d/n", c, c);
		if(c >= 'A' && c<='Z'){
			c += 32;
		}
		if(c != '.'){
			printf("%c", c);
		}
		
	}while(c != '.');
	
	return 0;
}
