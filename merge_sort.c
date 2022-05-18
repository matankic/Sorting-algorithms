#include "merge_sort.h"
#include <stdlib.h>

void merge(int *arr, int first, int middle, int last){
	int i = first, j = middle + 1, k = 0;
	int temp[last - first + 1];
	while (i <= middle && j <= last){
		if (arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while (i <= middle) // remaining left tail
		temp[k++] = arr[i++];
	while (j <= last) // (NAND) remaining right tail
		temp[k++] = arr[j++];
	for (i = first, k = 0; i <= last; i++)
		arr[i] = temp[k++];
}
void mergeSort(int *arr, int first, int last){
	if (last <= first)
		return;
	int middle = (first + last) / 2;
	mergeSort(arr, first, middle);
	mergeSort(arr, middle + 1, last);
	merge(arr, first, middle, last);
}
