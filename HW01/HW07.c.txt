include <stdio.h>			// подключаем заголовочный файл stdio.h
int main(void)						// определяем функцию main
{		
	int a, b;
	signed int difference;
	
	scanf("%d %d", &a, &b);
	
	difference = a - b;
	
	printf("%d\n", difference);
	return 0;						// выходим из функции
}		