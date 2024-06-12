#include <iostream>
#include <chrono>
#include <limits>
using namespace std::chrono;
using namespace std;

long long fib1(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fib1(n - 1) + fib1(n - 2);
    }
}

long long fib2(int n, long long* arr) {
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] < arr[i - 1]) {
            cout << "Overflow detected at position " << i << endl;
            return -1;
        }
    }
    return arr[n];
}

int main() {
    int n;
    cout << "Enter the position for the Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number" << endl;
        return 1;
    }

    long long* arr = new (nothrow) long long[n + 1];
    if (arr == nullptr) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    auto start = high_resolution_clock::now();
    long long f1 = -1;
    if (n <= 40) { 
        f1 = fib1(n);
    }
    else {
        cout << "Skipping recursive calculation for n > 40 to avoid excessive computation time." << endl;
    }
    auto end = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end - start);

    auto start1 = high_resolution_clock::now();
    long long f2 = fib2(n, arr);
    auto end1 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(end1 - start1);

    if (f1 != -1) {
        cout << "Fibonacci number (recursive) is: " << f1 << endl;
        cout << "It takes time " << duration1.count() << " milliseconds" << endl;
    }

    if (f2 != -1) {
        cout << "Fibonacci number (iterative) is: " << f2 << endl;
        cout << "It takes time " << duration2.count() << " milliseconds" << endl;
    }
    else {
        cout << "Iterative method failed due to overflow." << endl;
    }

    delete[] arr;
}
