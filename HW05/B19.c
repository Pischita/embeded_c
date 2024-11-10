#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	
	scanf("%d", &number);
	int sum = 0; 
	while(number > 0){
		int digit = number % 10;
		sum += digit;
		number /= 10;
	}
	
	printf("%s", sum == 10 ? "YES" : "NO");
	
	return 0;
}
