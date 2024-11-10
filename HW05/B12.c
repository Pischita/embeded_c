#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int currentNumber;
	int max = -1, min = 10;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		
		max = max < currentNumber ? currentNumber : max;
		min = min > currentNumber ? currentNumber : min;
		
		number /= 10;
	}
	
	printf("%d %d\n", min, max);

	
	return 0;
}
