#include <stdio.h>

int main(void){
	int start = 0, finish = 0;
	scanf("%d%d", &start, &finish);
	
	int result = 0; 
	for(int i = start; i <=finish; i++){
		result += i*i;
	}
	printf("%d\n", result);

	
	return 0;
}
