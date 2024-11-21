#include <stdio.h>
#include <stdbool.h>


void printNumber(int n);
int sum1ToN(int n);
void numberInReverseOrder(int n, int level);
void printToDigit(int n);
void reverse_string();
void printStartToFinish(int start, int finish, int current);
int sumDigits(int n);
int is_prime(int n, int delitel);
int print1InToDigit(int n);
int recurs_power(int n, int p);

int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d", recurs_power(a, b) );
	
	//printStartToFinish(a, b, a);
	//printf("%d", sumDigits(a) );
	
}

void monotonicSequance(int digit, int count){
	if (digit == count){
		return;
	}
	
	for(int i = 1; i <= digit; i++){
		printf("%d ", digit);
	}
	
	
	monotonicSequance(digit + 1, count);	
		
}

int recurs_power(int n, int p){
	if (p == 0)
	{
		return 1;
	}
	if( p == 1){
		return n;
	}
	
	return n * recurs_power(n, p-1);
	
}

int print1InToDigit(int n){
	
	int remainder = n % 2;
	if(n <= 1){
		//printf("%d", remainder);
		return n;
	}
	
	return remainder + print1InToDigit(n / 2);
}

int is_prime(int n, int delitel){
	if (n == 1)
	{
		return 0;
	}
	if(delitel + 1 >= n){
		return 1;
	}
	
	if (n % delitel == 0)
	{
		return 0;
	}
	
	
	return is_prime(n, delitel + 1);
	
}

int sumDigits(int n){
	if (n <= 0){
		return 0;
	}
	
	int number = n % 10;	
	
	return number + sumDigits(n / 10);
	
}

void printStartToFinish(int start, int finish, int current){
	
	printf("%d ", current);
	if(current == finish){
		return;
	}
	
	if(start > finish){
		printStartToFinish(start, finish, current -1);
	}else{
		printStartToFinish(start, finish, current + 1);
	}
	
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

