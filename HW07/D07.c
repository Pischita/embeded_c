#include <stdio.h>

void printNumber(int n);
int sum1ToN(int n);
void numberInReverseOrder(int n, int level);
void printToDigit(int n);
void reverse_string();

int main(){
	
	int a;
	scanf("%d", &a);
	printNumber(a);
	//printf("%d", sum1ToN(a) );
	
}

void reverse_string(){
	char ch = getchar();
	if(ch == '.'){
		return;
	}
	
	reverse_string();
	printf("%c", ch );
}

void printToDigit(int n){
	
	int remainder = n % 2;
	if(n <= 1){
		printf("%d", remainder);
		return;
	}
	
	printToDigit(n / 2);
	
	printf("%d", remainder);
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

void printNumberReverse(int n){
	if(n > 1){
		printNumber(n-1);
	}
	
	printf("%d ", n);
	return;
}


void printNumber(int n){
	
	printf("%d ", n);
	if(n > 1){
		printNumber(n-1);
	}
	
	
	return;
}

