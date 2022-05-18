#include "selection.h"

void recursiveSelectionSort(int *arr, int n){
	if (n <= 1)
		return;
	for (int i = 0; i < n-1; i++){
		if (arr[i] > arr[n-1]){
			arr[i] += arr[n-1];
			arr[n-1] = -arr[n-1] + arr[i];
			arr[i] -= arr[n-1];
		}
	}
	recursiveSelectionSort(arr, n-1);
}
void selectionSort(int *arr, int n){
	for (int i = n - 1; i > 1; i--){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[i]){
				arr[j] += arr[i];
				arr[i] = -arr[i] + arr[j];
				arr[j] -= arr[i];
			}
		}
	}
}
