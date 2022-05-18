#include "insertion.h"

void recursiveInsertionSort(int *arr, int n){
	if (n <= 1)
		return;
	recursiveInsertionSort(arr, n-1);
	for (int i = n-2; i >= 0; i--){
		if(arr[i] > arr[i+1]){
			arr[i] += arr[i+1];
			arr[i+1] = -arr[i+1] + arr[i];
			arr[i] -= arr[i+1];
		}
	}
}
void insertionSort(int *arr, int n){
	if (n < 2) // edge case
		return;
	for (int i = 2; i <= n; i++){
		for(int j = i - 1; j > 0; j--){
			if(arr[j-1] > arr[j]){
				arr[j-1] += arr[j];
				arr[j] = -arr[j] + arr[j-1];
				arr[j-1] -= arr[j];
			}
		}
	}
}
