#include <stdio.h>

float averageInArray(int *arr, int length);
int minInArray(int *arr, int length);
void printMinMaxWithNumbers(int *arr, int length);

int main(void){
	const int length = 10;
	int arr[length];
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}
	
	printMinMaxWithNumbers(arr, length);
	//printf("%d \n", minInArray(arr, length));
	//printf("%.3f", averageInArray(arr, length) );
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
