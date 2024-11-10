#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	int count = 0;
	do{
		scanf("%d", &number);
		
		if(number != 0){
			count++;
		}
		
		
	}while(number != 0);
	
	printf("%d\n", count);
	return 0;
}
