#include <stdio.h>

int main(void){
	int n = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	
	return 0;
}
