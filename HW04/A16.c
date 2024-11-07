#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>


int main(void){
	int32_t a, b, c;
	bool isAcending;
	
	scanf("%d%d%d", &a, &b, &c);
	
	isAcending = a < b;
	isAcending = isAcending && b < c;
	
	printf("%s", isAcending ? "YES" : "NO");
	
	

}
