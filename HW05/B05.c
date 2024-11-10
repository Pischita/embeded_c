#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int count = 0;
	int currentNumber = 0, previousNumber = 99;
	bool isEqual = false; 
	
	 
	while(number > 0){
		count++;
		currentNumber = number % 10;
		if(currentNumber == previousNumber){
			isEqual = true;
			break;
		}	
		previousNumber = currentNumber;	
		
		number /= 10;
	}
	printf("%s\n", isEqual ? "YES" : "NO");

	
	return 0;
}
