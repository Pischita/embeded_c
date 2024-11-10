#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int currentNumber;
	int odd = 0, even = 0;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		
		odd += currentNumber % 2 == 1 ? 1 : 0;
		even += currentNumber % 2 == 0 ? 1 : 0;
		
		number /= 10;
	}
	
	printf("%d %d\n", even, odd);

	
	return 0;
}
