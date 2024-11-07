#include <stdio.h>
#include <inttypes.h>



int main(void){
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);

	if( (a < b+c) && (b < a+c ) && ( c < a+b ) ){
		printf("YES");
	}else{
		printf("NO");
	}
}
