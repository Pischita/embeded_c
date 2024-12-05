#include <stdio.h>
#include <math.h>


void inputArr(int *arr, int length);
void sort_array(int size, int a[]);
void printArr(int *arr, int length);
void sort_even_odd(int n, int a[]);
void digitsByAscending();
void print_digit(char s[]);
int find_max_array(int size, int a[]);
int is_two_same(int size, int a[]);
 int compression(int a[], int b[], int N);
 int missingNumber(int *arr, int length);
 void swap_negmax_last(int size, int a[]);
void zipString(char *str, char *resultStr);
void change_max_min(int size, int a[]);
void f17();
void totalByStrings();
void f19();
void f11();

int main(void){
	f11();
	
	
		
	return 0;
}

void f11(){
	const int size = 30;
	int a[size];
	for (int i = 0; i < size; i++){
		scanf("%d", &a[i]);
	}
	
	int firstMin = 32767;
	int secondMin = 32767;
	int indexFirstMin = -1, indexSecondMin = -1;
	
	for (int i = 0; i < size; i++){
		if (a[i] < firstMin)
		{
			firstMin = a[i];
			indexFirstMin = i;
		}
	}
	
	for (int i = 0; i < size; i++){
		if (indexFirstMin == i)
		{
			continue;
		}
		
		if (a[i] < secondMin)
		{
			secondMin = a[i];
			indexSecondMin = i;
		}
	}
	if(indexFirstMin < indexSecondMin){
		printf("%d %d", indexFirstMin, indexSecondMin);
	}else{
		printf("%d %d", indexSecondMin, indexFirstMin);
	}
	
	
}

void f19(){
	const int size = 5;
	int a[size][size];
		
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int sum = 0;
	
	for (int i = 0; i < size; i++){
		sum += a[i][i];
	}
	
	int average = sum / size;
	
	int count = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (a[i][j] > average)
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
}


void totalByStrings(){
	const int size = 10;
	int a[size][size];
		
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int sum = 0;
	
	for (int i = 0; i < size; i++){
		int max = -32768;
		for (int j = 0; j < size; j++){
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		
		sum += max;
	}
	
	printf("%d", sum);
	
}

void f17(){
	const int size = 5;
	int a[size][size];
		
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int sum = 0;
	
	for (int i = 0; i < size; i++){
		sum += a[i][i];
	}
	
	printf("%d", sum);
}

int count_bigger_abs(int n, int a[]){
	int max = -32768;
	
	for(int i = 0; i < n; i++){
		
		if(a[i] > max){
			max = a[i];
			
		}
	}
	
	int counter = 0;
	for(int i = 0; i < n; i++){
		
		if(abs(a[i]) > max){
			counter++;
		}
	}

	return counter;
	
}

int sum_between_ab(int from, int to, int size, int a[]){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(from < to && a[i] >= from && a[i] <= to){
			count+= a[i];
		}
		
		if(from > to && a[i] >= to && a[i] <=from ){
			count+= a[i];
		}
	}
	return count;
}

int count_between(int from, int to, int size, int a[]){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(a[i] >= from && a[i] <= to){
			count++;
		}
	}
	return count;
}

void change_max_min(int size, int a[]){
	int min = 32767, max = -32768, indexMin = -1, indexMax = -1;
	
	for(int i = 0; i < size; i++){
		if(a[i] < min){
			min = a[i];
			indexMin = i; 
		}
		
		if(a[i] > max){
			max = a[i];
			indexMax = i;
		}
	}
	
	int temp = a[indexMin];
	a[indexMin] = a[indexMax];
	a[indexMax] = temp;
}

void zipString(char * str, char * resultStr){
	int resultIndex = 0;
	
	char currentCh = str[0];
	char counter = 0;
	
	int i = 0;		
	char ch = str[i];
	
	while(ch != '.'){
		if(currentCh == ch){
			counter++;
		}else{
			resultStr[resultIndex++] = currentCh;
			resultStr[resultIndex++] = (char) counter;
			
			currentCh = ch;
			counter = 1;	
		}
		i++;
		ch = str[i];
	} 
	
	resultStr[resultIndex++] = currentCh;
	resultStr[resultIndex++] = (char) counter;
	
	resultStr[resultIndex++] = '\0';
	
	
}

void swap_negmax_last(int size, int a[]){
	int maxIndex = -1;
	int maxNegative = -32768;
	for(int i = 0; i < size; i++){
		if(a[i] < 0 && a[i] > maxNegative ){
			maxNegative = a[i];
			maxIndex = i;
		}
	}

	if(maxIndex >= 0){
		int temp = a[maxIndex];
		a[maxIndex] = a[size - 1];
		a[size - 1] = temp;
	}
}

int missingNumber(int *arr, int length){
	sort_array(length, arr);
	
	int startNumber = arr[0];
	
	for (int i = 0; i < length; i++)
	{
		if (startNumber != arr[i])
		{
			return startNumber;
		}else{
			startNumber++;
		}
	}
	
	
	return startNumber;
	
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
	if(counter >= 1){
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

