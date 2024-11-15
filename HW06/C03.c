#include <stdio.h>

int abs(int n);
int pow(int number, int powerOfNumber);
int middle(int a, int b);

int main(void){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d", middle(a, b) );
	
	return 0;
}

int middle(int a, int b){
	return (a + b) / 2;	
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
