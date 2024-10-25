#include <stdio.h>			// подключаем заголовочный файл stdio.h
int main(void)						// определяем функцию main
{		
	int a, b, r, total, totalMultiplication;
	scanf("%d %d %d", &a, &b, &r);
	total = a + b+ r;
	totalMultiplication = a* b* r;
	printf("%d+%d+%d=%d\n", a, b ,r, total);
	printf("%d*%d*%d=%d", a, b ,r, totalMultiplication);
	return 0;						// выходим из функции
}	