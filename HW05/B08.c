#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	scanf("%d", &number);
	
	int digits[10];
	for(int i = 0; i < 10; i++){
		digits[i] = 0;
	}
	int currentNumber;
	bool isEqual = false;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		digits[currentNumber]++;
		
		number /= 10;
	}
	
	if(digits[9] == 1){
		isEqual = true;
	}
	
	printf("%s\n", isEqual ? "YES" : "NO");

	
	return 0;
}
