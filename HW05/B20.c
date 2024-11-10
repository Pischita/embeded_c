#include <stdio.h>
#include <stdbool.h>


int main(void){
	int number;
	
	scanf("%d", &number);
	bool isSimple = true;
	
	if(number == 1){
		isSimple = false;
	}
	
	for(int i = 2; i< number && i < 100; i++){
		if(number % i == 0){
			isSimple = false;
			break;
		}
	}
	
	printf("%s", isSimple ? "YES": "NO");
	
	return 0;
}
