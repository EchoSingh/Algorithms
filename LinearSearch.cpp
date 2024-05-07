#include <iostream>
#include <vector>
using namespace std;
int main() {
	cout << "Enter the size of the array ";
	int s;
	cin >> s;
	cout << "Enter the array ";
	vector<int> arr(s);
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	cout << "Enter the element to be searched ";
	int x;
	cin >> x;
	for (int i = 0; i < s; i++) {
		if (arr[i] == x) {
			cout << "Element found at index " << i << endl;
			return 0;
		}
	}
}