#include "binarysearch.h"
int bs(int arr[], int start_index, int end_index, int key) {
	if (start_index <= end_index) {
		int mid = start_index + (end_index - start_index) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] > key) {
			return bs(arr, mid + 1, end_index, key);
		}
		return bs(arr, start_index, mid - 1, key);
	}
	return -1;
}
int binarsearch(int arr[],int size,int key) {
	int start_index = 0;
	int end_index = size - 1;
	int m = bs(arr, start_index, end_index, key);
	return m;
}