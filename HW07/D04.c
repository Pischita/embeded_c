#include <stdio.h>

void printNumber(int n);
int sum1ToN(int n);
void numberInReverseOrder(int n, int level);

int main(){
	int a;
	scanf("%d", &a);
	numberInReverseOrder(a, 1);
	//printf("%d", sum1ToN(a) );
	
}

void numberInReverseOrder(int n, int level){
	int number = n % 10;
	
	
	if(n > 0){
		
		numberInReverseOrder(n / 10, level + 1);
	}else{
		if(level == 1){
			printf("%d ", number);
		}
		return;
	}
	
	printf("%d ", number);
	
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

