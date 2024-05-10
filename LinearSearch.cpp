#include "linearsearch.h"
int linearsearch(std::vector<int> arr, int size, int key) {
	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			return i;
		}
	}
	return -1;
}