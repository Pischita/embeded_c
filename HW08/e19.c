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
void sortByLastDigit(int *arr, int length);
void inputArr(int *arr, int length);
void sortByHalf(int *arr, int length);
void e13(int * arr, int length);
void frequencyOfOccurrence(int * arr, int length);
void e15(int * arr, int length);
void mostFrequency(int * arr, int length);
void frequencyOnce(int * arr, int length);
void e18();
void e19(void);

int main(void){
	e19();
	//const int length = 10;
	//int arr[length];
	
	//inputArr(arr, length);
	
	//frequencyOnce(arr, length);
	//printArr(arr, length);
	
	//shiftToTheRight(arr, length, 4);
	
	//printArr(arr, length);
	
	//printf("%.2f", averageInArray(arr, length) );
	
	//printSumPositive(arr, length);
	//print2MaxNumbers(arr, length);
	//printMinMaxWithNumbers(arr, length);
	//printf("%d \n", minInArray(arr, length));
	//printf("%.3f", averageInArray(arr, length) );
}

void e19(void){
	char numbers[30];
	scanf("%[0-9]", numbers);
	
	int i = 0;
	while(numbers[i] != '\0'){
		printf("%c ", numbers[i]);
		i++;
	}
}

void e18(void){
	int number;
	scanf("%d", &number);
	
	int arr[10];
	for(int i = 2; i < 10; i++){
		arr[i] = number / i;
	}
	
	for(int i = 2; i < 10; i++){
		printf("%d %d\n",i, arr[i]);
	}
}

void frequencyOnce(int * arr, int length){
	int res[length];
	for ( int i = 0; i < length; i++){
		res[i] = 0;
	}
	
	const int MAX_NUMBER = 32767;
	
	for ( int i = 0; i < length; i++){
		int current = arr[i];
		
		if(current == MAX_NUMBER)
			continue;
		
		for (int j = i+ 1; j < length; j++){
			if (current == arr[j]){
				res[i]++;
				arr[j] = MAX_NUMBER; 
			}
		}
	}
	
	for ( int i = 0; i < length; i++){
		if(res[i] == 0 && arr[i] != MAX_NUMBER ){
			printf("%d ", arr[i]);
		}
	}
}

void mostFrequency(int * arr, int length){
	int res[length];
	for ( int i = 0; i < length; i++){
		res[i] = 0;
	}
	
	const int MAX_NUMBER = 32767;
	
	for ( int i = 0; i < length; i++){
		int current = arr[i];
		
		if(current == MAX_NUMBER)
			continue;
		
		for (int j = i+ 1; j < length; j++){
			if (current == arr[j]){
				res[i]++;
				arr[j] = MAX_NUMBER; 
			}
		}
	}
	
	int maxNumber = -MAX_NUMBER, maxIndex = -1;
	for ( int i = 0; i < length; i++){
		
		if(res[i] > 0 && maxNumber < res[i]){
			maxIndex = i;
			maxNumber =  res[i];
		}
	}
	
	printf("%d ", arr[maxIndex]);
}

void e15(int * arr, int length){
	int resPositive[length];
	int indexPositive = 0;
	
	int resNegative[length];
	int indexNegative = 0;
	
	for ( int i = 0; i < length; i++){
		if(arr[i] > 0){
			resPositive[indexPositive++] = arr[i];
		}else if (arr[i] < 0){
			resNegative[indexNegative++] = arr[i];
		}
	}
	
	for ( int i = 0; i < indexPositive; i++){
		printf("%d ", resPositive[i]);
	}
	
	for ( int i = 0; i < indexNegative; i++){
		printf("%d ", resNegative[i]);
	}
}

void frequencyOfOccurrence(int * arr, int length){
	int res[length];
	for ( int i = 0; i < length; i++){
		res[i] = 0;
	}
	
	
	for ( int i = 0; i < length; i++){
		int current = arr[i];
		
		if(current == 0)
			continue;
		
		for (int j = i+ 1; j < length; j++){
			if (current == arr[j]){
				res[i]++;
				arr[j] = 0; 
			}
		}
	}
	
	for ( int i = 0; i < length; i++){
		if(res[i] > 0){
			printf("%d ", arr[i]);
		}
	}
	
	
}


void e13(int * arr, int length){
	int res[length];
	int j = 0;
	for ( int i = 0; i < length; i++){
		int remainder = arr[i] % 100;
		if(remainder < 10){
			res[j++] = arr[i];
		}
	}
	
	printArr(res, j);
}


void sortArr(int * arr, int startIndex, int lastIndex, int order){
	for ( int i = startIndex; i < lastIndex; i++)
	{
		for (int j = i + 1; j < lastIndex; j++)
		{
			int di = arr[i];
			int dj = arr[j];
			if(order == 1){
				if (di > dj){
					swapArr(arr, i, j);
				}
			}else{
				if (di < dj){
					swapArr(arr, i, j);
				}
			}
			
		}
	}
}


void sortByHalf(int *arr, int length){
	
	int startIndex = 0;
	int lastIndex = (length / 2) ;
	int order = 1;
	
	sortArr(arr, startIndex, lastIndex, order);
	
	order = 0;
	startIndex = lastIndex ;
	lastIndex = length;
	
	sortArr(arr, startIndex, lastIndex, order);
	
	
	
}



void sortByLastDigit(int *arr, int length){
	for ( int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			int di = arr[i] % 10;
			int dj = arr[j] % 10;
			
			if (di > dj){
				swapArr(arr, i, j);
			}
		}
	}
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
