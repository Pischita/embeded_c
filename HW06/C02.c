#include <stdio.h>

int abs(int n);
int pow(int number, int powerOfNumber);

int main(void){
	int number, power;
	
	scanf("%d %d", &number, &power);
	
	printf("%d", pow(number, power) );
	
	return 0;
}

int pow(int number, int powerOfNumber){
	int result = 1;
	
	for(int i = 0; i < powerOfNumber; i++){
		result *= number;
	}
	
	return result;
}

int abs(int n){
	return n < 0 ? -n : n;
}
