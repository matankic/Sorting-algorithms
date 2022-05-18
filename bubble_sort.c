#include "bubble_sort.h"

void recursiveBubbleSort(int *arr, int n){
	if (n <= 1)
		return;
	for (int i = 0; i < n - 1; i++){
		if (arr[i] > arr[i+1]){
			arr[i] += arr[i+1];
			arr[i+1] = -arr[i+1] + arr[i];
			arr[i] -= arr[i+1];
		}
	}
	recursiveBubbleSort(arr, n - 1);
}
void BubbleSort(int *arr, int n){
	for (int i = n - 1; i > 1; i--){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j +1]){
				arr[j] += arr[j+1];
				arr[j+1] = -arr[j+1] + arr[j];
				arr[j] -= arr[j+1];
			}
		}
	}
}
