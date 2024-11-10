#include <stdio.h>
#include <stdbool.h>


int main(void){
	int iteration, number;
	
	scanf("%d", &number);
	
	
	int fib1 = 1, fib2 = 1, fibNew;
	if(number == 1){
		printf("%d ", fib1);
	}else{
		printf("%d %d ", fib1, fib2);
	}
	
	for (iteration = 3; iteration <= number; iteration++){
		fibNew = fib1 + fib2;
		printf("%d ", fibNew);
		fib1 = fib2;
		fib2 = fibNew;
	}
	
	
	
	 
	return 0;
}
