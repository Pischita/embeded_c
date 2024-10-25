#include <stdio.h>			// подключаем заголовочный файл stdio.h
int main(void)						// определяем функцию main
{		
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (a < b){
		printf("%d %d\n", a, b);
	}else{
		printf("%d %d\n", b, a);
	}
	
	
	return 0;						// выходим из функции
}		
