#include <stdio.h>

int main(void){
	int number;
	scanf("%d", &number);
	
	int count = 0;
	int sum = 0; 
	while(number > 0){
		count++;
		sum += number % 10;
		number /= 10;
	}
	printf("%d\n", sum);

	
	return 0;
}
