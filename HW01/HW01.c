
#include <stdio.h>
#include <locale.h>


int main(void){
	setlocale(LC_ALL, ".utf-8");

	printf("Hello world!");
	getchar();
	return 0;
}