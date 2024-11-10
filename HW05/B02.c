#include <stdio.h>

int main(void){
	int start = 0, finish = 0;
	scanf("%d%d", &start, &finish);
	
	for(int i = start; i <=finish; i++){
		printf("%d ", i*i);
	}
	
	return 0;
}
