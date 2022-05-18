#include<stdio.h>
#include<time.h>

#include "bubble_sort.h"
#include "selection.h"
#include "insertion.h"

#define N 20

void printArr(int *, int);
void shuffleArr(int *, int);
void whatSort(const char *, int *, int);

int main(){
	int array[N];
	shuffleArr(array, N);
	printf("Shuffled array :\n");
	printArr(array, N);

	recursiveBubbleSort(array, N);
	whatSort("Recursive bubble-sort :", array, N);

	BubbleSort(array, N);
	whatSort("Non-recursive bubble-sort :", array, N);

	recursiveSelectionSort(array, N);
	whatSort("Recursive selection-sort :", array, N);

	selectionSort(array, N);
	whatSort("Non-recursive selection-sort :", array, N);

	recursiveInsertionSort(array, N);
	whatSort("Recursive insertion-sort :", array, N);

	insertionSort(array, N);
	whatSort("Non-recursive insertion-sort :", array, N);


	return 0;
}

void printArr(int *arr, int n){
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}
void shuffleArr(int *arr, int n){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		arr[i] = i;
	}
	for(int cnt = 1000, i, j; cnt; cnt--){
		i = rand() % n;
		j = rand() % n;
		if(i != j){
			arr[i] += arr[j];
			arr[j] = arr[i] - arr[j];
			arr[i] -= arr[j];
		}
	}
}
void whatSort(const char * str, int *arr, int n){
	puts(str);
	printArr(arr, n);
	shuffleArr(arr, n);
	printf("Shuffled array :\n");
	printArr(arr, n);
}
