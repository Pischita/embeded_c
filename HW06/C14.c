#include <stdio.h>
#include <stdbool.h>

int abs(int n);
int powMy(int number, int powerOfNumber);
int middle(int a, int b);
int f(int x);
int sum1ToN(int n);
unsigned long long int geometricProgression(int step);
void toUppercase();
int factorial(int n);
int nod(int a, int b);
bool isSumEven(int number);

int main(void){
	int a;
	scanf("%d", &a);
	printf("%s \n", isSumEven(a) == true ? "YES" : "NO" );
	
	//int a, b;
	
	//scanf("%d%d", &a, &b);
	//printf("%d \n", nod(a, b) );
		
	
	return 0;
}

bool isSumEven(int number){
	int sum = 0; 
	while(number > 0){
		sum += number % 10;
		number /= 10;
	}
	return sum % 2 == 0 ? true : false;
}

int nod(int a, int b){
	int d1 = a, d2 = b, nod, temp;
	
	while(1){
		if(d2 > d1){
		temp = d2;
		d2 = d1;
		d1 = temp;
	}
		
		if(d1 - d2 == 0){
			break;
		}
		
		nod = d1 - d2;
		
		d1 = d2;
		d2 = nod;
	}
	
	return nod;
	
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
