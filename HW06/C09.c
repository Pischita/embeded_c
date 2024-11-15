#include <stdio.h>

int abs(int n);
int powMy(int number, int powerOfNumber);
int middle(int a, int b);
int f(int x);
int sum1ToN(int n);
unsigned long long int geometricProgression(int step);
void toUppercase();
int factorial(int n);

int main(void){
	
	int a;
	
	scanf("%d", &a);
	printf("%d \n", factorial(a) );
		
	
	return 0;
}

int factorial(int n){
	int result = 1;
	for (int i = n; i > 0; i--)			
	{	
		result *=i; 
	}
	
	return result;
	
}

void toUppercase(){
	char ch = getchar();
	while(ch != '.'){
		if(ch >= 'a' && ch <= 'z'){
			ch -= 32;
		}
		
		putchar(ch);
		
		ch = getchar();
	}
}

unsigned long long int geometricProgression(int step){
	unsigned long long result = 1;
	
	for(int i = 2; i <= step; i++){
		result *= 2;
	} 
	
	return result;
	
}

int sum1ToN(int n){
	int result;
	for (int i = 1; i <= n; i++){
			result += i;
	}
	
	return result;
}


int f( int x){
	if (x >= -2 && x <2)
	{
		return x * x;
	}else if (x >=2)
	{
		return x * x + 4*x + 5;
	}else if (x < -2)
	{
		return 4;
	}
	
	return 0;
}


int middle(int a, int b){
	return (a + b) / 2;	
}

int powMy(int number, int powerOfNumber){
	int result = 1;
	
	for(int i = 0; i < powerOfNumber; i++){
		result *= number;
	}
	
	return result;
}

int abs(int n){
	return n < 0 ? -n : n;
}