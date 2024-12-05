#include <stdio.h>

void inputArr(int *arr, int length);
void sort_array(int size, int a[]);
void printArr(int *arr, int length);
void sort_even_odd(int n, int a[]);
void digitsByAscending();
void print_digit(char s[]);
int find_max_array(int size, int a[]);
int is_two_same(int size, int a[]);
 int compression(int a[], int b[], int N);

int main(void){
	int a[] = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0};
	int b[1000];
	
	int k = compression(a, b, 30);
	
	for(int i = 0; i < k; i++){
		printf("%d ", b[i]);
	}
		
	return 0;
}

int compression(int a[], int b[], int N){
	int currentElemet = 0;
	int counter = 0;
	int indexB = 0;
	for( int i = 0; i < N; i++){
		if(currentElemet != a[i]){
			b[indexB++] = counter;
			
			counter = 1;
			currentElemet =  a[i];
		}else{
			counter++;
		}
	}
	if(counter > 1){
		b[indexB++] = counter;
	}
		
	return indexB;	
}

int is_two_same(int size, int a[]){
	for(int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			if(a[i] == a[j]){
				return 1;
			}
			
		}
	}
	
	return 0;
}

int find_max_array(int size, int a[]){
	int max = a[0];
	
	for(int i = 0; i < size; i++){
		if (max < a[i])
		{
			max = a[i];
		}
	}
	
	return max;
}


void print_digit(char s[]){
	int digits[10] = {0};
	
	
	int i = 0;
	char ch;
	while ( (ch = s[i]) != '\0' )
	{
		i++;
		if (ch - 48 >= 0 && ch - 48 < 10)
		{
			digits[ch - 48]++;
		}	
		
	}
	
	for(int i = 0; i < 10; i++){
		if(digits[i] > 0){
			printf("%d %d \n", i, digits[i] );
		}
	}
	
}

void digitsByAscending(){
	char str[1001];
	scanf("%s", str);
	
	int digits[10] = {0};
	
	int i = 0;
	char ch;
	while ( (ch = str[i]) != '\0' )
	{
		i++;
		
		
		digits[ch - 48]++;
	}
	
	for(int i = 0; i < 10; i++){
		if(digits[i] > 0){
			printf("%d %d \n", i, digits[i] );
		}
	}
}

void sort_even_odd(int n, int a[]){
	
	int arr[n]; 	
	int arrIndex = 0;
	
	for (int i = 0; i < n; i++){
		if( a[i] % 2 == 0){
			arr[arrIndex] = a[i];
			arrIndex++;
		}
	}
	
	for (int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			arr[arrIndex] = a[i];
			arrIndex++;
		}
	}
	
	for (int i = 0; i < n; i++){
		a[i] = arr[i];
	}	
}

void sort_array(int size, int a[]){
	for(int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
	}
}

void inputArr(int *arr, int length){
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}
}

void printArr(int *arr, int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

