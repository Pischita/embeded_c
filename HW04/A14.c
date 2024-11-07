#include <stdio.h>
#include <inttypes.h>

int main(void){
	int32_t a;
	int8_t firstDigit, secondDigit, thirdDigit, maxDigit;
	
	scanf("%d", &a);
	
	firstDigit = a % 10;
	secondDigit = (a % 100) / 10;
	thirdDigit = (a % 1000) / 100;
	
	maxDigit = firstDigit > secondDigit ? firstDigit : secondDigit;
	maxDigit = maxDigit > thirdDigit ? maxDigit : thirdDigit;
		
	printf("%d", maxDigit);
}

