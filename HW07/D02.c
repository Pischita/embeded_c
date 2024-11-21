#include <stdio.h>

void printNumber(int n);
int sum1ToN(int n);
void numberInReverseOrder(int n);

int main(){
	int a;
	scanf("%d", &a);
	numberInReverseOrder(a);
	//printf("%d", sum1ToN(a) );
	
}

void numberInReverseOrder(int n){
	int number = n % 10;
	
	if(n > 0){
		printf("%d ", number);
		numberInReverseOrder(n / 10);
	}else{
		return;
	}
	
	
	
}

int sum1ToN(int n){
	if(n > 1){
		return n + sum1ToN(n-1);
	}
	
	return 1;
}

void printNumber(int n){
	if(n > 1){
		printNumber(n-1);
	}
	
	printf("%d ", n);
	return;
}

