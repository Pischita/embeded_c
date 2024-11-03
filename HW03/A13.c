#include <stdio.h>

int main(void){
	int number = 0;
	
	scanf("%d", &number);
	
	int sumDigits = 0;
	int firstDigit = number % 10;
	int secondDigit = (number % 100) / 10;
	int thirdDigit = (number % 1000) / 100;
	
	sumDigits = firstDigit;
	sumDigits *= secondDigit;
	sumDigits *= thirdDigit;	
	
	printf("%d", sumDigits);
}
