#include <stdio.h>

int abs(int n);
int powMy(int number, int powerOfNumber);
int middle(int a, int b);
int f(int x);

int main(void){
	int a;
	int max = -1000;
		
	while( 1 )
	{
		scanf("%d", &a);
		
		if(a == 0){
			break;
		}
		
		int res = f(a);
		
		//printf("%d \n", res );
		
		max = res > max ? res : max;
	}
	
	printf("%d \n", max );
	
	return 0;
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
