#include <stdio.h>			// подключаем заголовочный файл stdio.h
int main(void)						// определяем функцию main
{		
	int a, b, r;
	float avg;
	
	scanf("%d %d %d", &a, &b, &r);
	
	avg = (float)(a+b+r) / 3;
	
	printf("%.2f\n", avg);
	return 0;						// выходим из функции
}		