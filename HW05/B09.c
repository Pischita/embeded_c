#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int currentNumber, previousNumber = 10;
	bool isIncrease = true;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		
		if( previousNumber < currentNumber ){
			isIncrease = false;
			break;
		}	
		
		previousNumber = currentNumber;	
		
		number /= 10;
	}
	
	printf("%s\n", isIncrease ? "YES" : "NO");

	
	return 0;
}
