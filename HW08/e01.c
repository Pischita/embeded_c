#include <stdio.h>

float averageInArray(int *arr, int length);
int minInArray(int *arr, int length);

int main(void){
	const int length = 5;
	int arr[length];
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d \n", minInArray(arr, length));
	//printf("%.3f", averageInArray(arr, length) );
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
