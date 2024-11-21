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
void monotonicSequance(int digit, int count);
void simpleMultiply(int n, int multip);
void printOdd();
int findMax(int max);
int is2pow(int n, int pow);
void print_digits(int n);
int acounter(int current);

int main(){
	
	printf("%d", acounter(0) );
	//int a;
	//scanf("%d", &a);
	//print_digits(a);
	//printf("%s", is2pow(a, 2) == 1 ? "YES" : "NO" ); 
	
	//int a;
	//scanf("%d", &a);
	//simpleMultiply(a, 2);
	//monotonicSequance(1, a);
	
	//printStartToFinish(a, b, a);
	//printf("%d", sumDigits(a) );
	
	return 0;
	
}

int acounter(int current){
	char ch;
	scanf("%c", &ch);
	if(ch == '.'){
		return current;
	}
	
	if(ch == 'a' ){
		current++;
	}
	
	return acounter(current);
}

void print_digits(int n){
	if (n == 0)	
	{
		return;
	}
	int digit = n % 10;
	
	
	print_digits(n / 10);
	printf("%d ", digit);
}

int is2pow(int n, int pow){
	if( n == 1){
		return 1;
	}
	
	if( pow > n){
		return 0;
	}
	
	if(n == pow){
		return 1;
	}
	
	return is2pow(n, pow * 2);
}

int findMax(int max){
	int n;
	scanf("%d", &n);
	
	if(n == 0){
		return max;
	}
	
	if (n > max){
		max = n;
	}
	
	return findMax(max);	
}

void printOdd(){
	int n;
	scanf("%d", &n);
	
	if(n == 0){
		return;
	}
	
	if (n % 2 == 1 || n % 2 == -1){
		printf("%d ", n);
	}
	
	printOdd();
	
}

void simpleMultiply(int n, int multip){
	if( multip > n){
		return;
	}
	
	if(n % multip == 0){
		printf("%d ", multip);
		return simpleMultiply( n / multip, multip);
	}else{
		return simpleMultiply(n, multip + 1);
	}
	
	return;
}

void monotonicSequance(int digit, int count){
	
	int currentStep = 0;
	int cs = digit-1;
	while(cs > 0){
		currentStep += cs;
		cs--;
	}
	
	
	
	for(int i = 1; i <= digit; i++){
		printf("%d ", digit);
		
		if ( ++currentStep == count){
			return;
		}
		
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
