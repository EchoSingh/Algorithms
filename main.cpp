#include <iostream>
#include <vector>
#include "linearsearch.h"
#include "binarysearch.h"
using namespace std;
int main() {
	int size = 0;
	cout << "Enter the length of the array ";
	cin >> size;
	vector <int> arr(size);
	cout << "Enter the array : ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int key;
	cout << "Enter the key to find ";
	cin >> key;
	cout << "Binary Search index (O(logn)) is : " << binarysearch(arr, size, key);
	cout << "Linear Search index (0(n)) is : " << linearsearch(arr, size, key);
}