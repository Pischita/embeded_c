#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	
	scanf("%d", &number);
	
	for(int i = 10; i <= number; i++){
		int n, sum = 0, multiplication = 1;
		n = i;
		while(n > 0){
			int digit = n % 10;
			sum += digit;
			multiplication *= digit;			
			n /= 10;
		}
		
		if(sum == multiplication){
			printf("%d ", i);
		}
	
	}
	 
	return 0;
}
