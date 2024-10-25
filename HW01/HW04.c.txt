#include <stdio.h>			// подключаем заголовочный файл stdio.h
int main(void)						// определяем функцию main
{		
	int a, b, r, total;
	scanf("%d %d %d", &a, &b, &r);
	total = a + b+ r;
	printf("%d+%d+%d=%d", a, b ,r, total);
	return 0;						// выходим из функции
}		