#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int currentNumber;
	int result = 0;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		
		result += currentNumber;
		result *=10;
		
		number /= 10;
	}
	
	result /= 10;
	printf("%d\n", result);

	
	return 0;
}
