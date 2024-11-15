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
bool isIncrease(int number);
int is_prime(int n);
int is_happy_number(int n);
int is_digit(char c);
int countDigitsInString();
int digit_to_num(char c);
int sumDigitsInString();
bool isBracketsTrue(void);

int main(void){
	
	printf("%s \n", isBracketsTrue() ? "YES" : "NO" );
	//int a;
	//scanf("%d", &a);
	//printf("%s \n", is_happy_number(a) ? "YES" : "NO" );
	
	//int a, b;
	
	//scanf("%d%d", &a, &b);
	//printf("%d \n", nod(a, b) );
		
	
	return 0;
}

double sinx(double x){
	double Xn = x;
	double sum = 0.0;
	int i = 1;
    do
    {
        sum += Xn;
        Xn *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    }
    while (fabs(Xn) > 0.001);
        return sum;
    }
}

bool isBracketsTrue(void){
	int nesting = 0;
	
	char ch = getchar();
	while(ch != '.'){
		if (ch == '(')	
		{
			nesting++;
		}else if(ch == ')'){
			nesting--;
		}
		
		if(nesting < 0){
			return false;
		}
	
		ch = getchar();
	}
	
	return nesting == 0;
}

int sumDigitsInString(){
	char ch = getchar();
	int result = 0;
	while(ch != '.'){
		result += digit_to_num(ch);
	
		ch = getchar();
	}
	
	return result;
}

int digit_to_num(char c){
	if (c >= '1' && c <= '9')
	{
		return c - 48;
	}else
	{
		return 0;
	}
}

int countDigitsInString(){
	char ch = getchar();
	int result = 0;
	while(ch != '.'){
		if(is_digit(ch) ){
			result++;
		}
	
		ch = getchar();
	}
	
	return result;
}

int is_digit(char c){
	if (c >= '0' && c <= '9')
	{
		return true;
	}else
	{
		return false;
	}
}

int is_happy_number(int n){
	
	int sum = 0, multiplication = 1;

	while(n > 0){
		int digit = n % 10;
		sum += digit;
		multiplication *= digit;			
		n /= 10;
	}
	return sum == multiplication;
	
}

int is_prime(int number){
	
	bool isSimple = true;
	
	if(number <= 1){
		isSimple = false;
	}
	
	for(int i = 2; i< number && i < 100; i++){
		if(number % i == 0){
			isSimple = false;
			break;
		}
	}
	
	return isSimple;
	
}

bool isIncrease(int number){
	
	int currentNumber, previousNumber = 10;
	bool isIncrease = true;
		 
	while(number > 0){
		
		currentNumber = number % 10;
		
		if( previousNumber <= currentNumber ){
			isIncrease = false;
			break;
		}	
		
		previousNumber = currentNumber;	
		
		number /= 10;
	}
		
	return isIncrease;
	
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
