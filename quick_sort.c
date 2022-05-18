#include "quick_sort.h"
#include <time.h>

void swap(int *p, int *q){
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

void partition(int *arr, int n){
	srand(time(NULL));
	if (n <= 1)
		return;
	int pivot = rand() % n; // pivot is randomized
	swap (arr, arr + pivot);
	pivot = 0;
	int left = 1, right = n-1;
	while (left <= right){
		if (left == right){
			if (arr[pivot] > arr[left]){
				swap (arr, arr + left);
				pivot = left;
			}
			break;
		}
		if (arr[right] > arr[pivot])
			right--;
		else{
			if (arr[left] <= arr[pivot])
				left++;
			else{
				swap (arr + left, arr + right);
				right--;
			}
		}
	}
	partition(arr, pivot);
	partition(arr + pivot + 1, n - 1 - pivot);
}
void quickSort(int *arr, int n){
	partition(arr, n);
}
