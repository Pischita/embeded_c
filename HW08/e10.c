#include <stdio.h>

float averageInArray(int *arr, int length);
int minInArray(int *arr, int length);
void printMinMaxWithNumbers(int *arr, int length);
void print2MaxNumbers(int *arr, int length);
void printSumPositive(int *arr, int length);
void swapArr(int *arr, int i, int j);
void swapHalf(int * arr, int legth);
void swapThird(int *arr, int length);
void printArr(int *arr, int length);
void shiftToTheRight(int *arr, int length, int count);


int main(void){
	const int length = 12;
	int arr[length];
	
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}
	
	shiftToTheRight(arr, length, 4);
	
	//printArr(arr, length);
	
	//printf("%.2f", averageInArray(arr, length) );
	
	//printSumPositive(arr, length);
	//print2MaxNumbers(arr, length);
	//printMinMaxWithNumbers(arr, length);
	//printf("%d \n", minInArray(arr, length));
	//printf("%.3f", averageInArray(arr, length) );
}

void shiftToTheRight(int *arr, int length, int count){
	int dest[length];

	for(int i = 0; i < length; i++){
		int j = i + count;
		if(j >= length){
			j = j % length;
		}
		
		dest[j] = arr[i];
	}
	
	printArr(dest, length);
}

void printArr(int *arr, int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swapArr(int *arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp; 	
}

void swapThird(int *arr, int length){
		
	int startIndex = 0;
	int finishIndex = 3;
	
	while (startIndex < finishIndex){
		
		swapArr(arr, startIndex, finishIndex);
		startIndex++;
		finishIndex--;
	}	
	
	startIndex = 4;
	finishIndex = 7;
	
	while (startIndex < finishIndex){
		
		swapArr(arr, startIndex, finishIndex);
		startIndex++;
		finishIndex--;
	}	
	
	startIndex = 8;
	finishIndex = 11;
	
	while (startIndex < finishIndex){
		
		swapArr(arr, startIndex, finishIndex);
		startIndex++;
		finishIndex--;
	}	
}


void swapHalf(int *arr, int length){
	int half = length / 2;
	
	int startIndex = 0;
	int finishIndex = half -1;
	
	while (startIndex < finishIndex){
		
		swapArr(arr, startIndex, finishIndex);
		startIndex++;
		finishIndex--;
	}
	
	
	
	startIndex = half ;
	finishIndex = length -1;
	
	while (startIndex < finishIndex){
		
		swapArr(arr, startIndex, finishIndex);
		startIndex++;
		finishIndex--;
	}
	
	
	
}

void printSumPositive(int *arr, int length){
	int sum = 0;
	
	for(int i = 0; i < length; i++){
		
		if (arr[i] > 0)
		{
			sum += arr[i];
			
		}
	}
	
	printf("%d", sum);
}

void print2MaxNumbers(int *arr, int length){
	int max = -32767, lastMax = -32767;
	for(int i = 0; i < length; i++){
		
		if (arr[i] > max)
		{
			lastMax = max;
			max = arr[i];
		}else if(arr[i] > lastMax){
			lastMax = arr[i];
		}
	}
	
	printf("%d", max + lastMax);
	
}

void printMinMaxWithNumbers(int *arr, int length){
	int min = arr[0], minNumber = 1;
	int max = arr[0], maxNumber = 1;
	for(int i = 0; i < length; i++){
		if (arr[i] < min)
		{
			min = arr[i];
			minNumber = i+1;
		}
		
		if (arr[i] > max)
		{
			max = arr[i];
			maxNumber = i+1;
		}
	}
	
	printf("%d %d %d %d", maxNumber, max, minNumber, min);
	
}

int minInArray(int *arr, int length){
	int min = arr[0];
	for(int i = 0; i < length; i++){
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	return min;
}

float averageInArray(int *arr, int length){
	//float average = 0;
	int total = 0;
	for(int i = 0; i < length; i++){
		total += arr[i];
	}
	
	return (float) total / length;
}
