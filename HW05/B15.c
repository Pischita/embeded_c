#include <stdio.h>
#include <stdbool.h>


int main(void){
	int d1, d2, nod, temp;
	
	scanf("%d%d", &d1, &d2);
	if(d2 > d1){
		temp = d2;
		d2 = d1;
		d1 = temp;
	}
	
	while(1){
		if(d1 - d2 == 0){
			break;
		}
		
		nod = d1 - d2;
		
		d1 = d2;
		d2 = nod;
	}
	
	printf("%d\n", nod);
	
	 
	return 0;
}
