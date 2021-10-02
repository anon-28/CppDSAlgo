#include<iostream>
using namespace std;

/**
 * @brief Binary search
 *
 * @param a array of integers
 * @param n size of the array
 * @param x element to be searched
 * @return int index of the searched element
 */
int binarySearch(int a[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        // int mid = (low + high) / 2;
        int mid = low + (high - low) / 2; // (low+high) may overflow
        if (x == a[mid]) return mid;    // found x return
        else if (x < a[mid]) high = mid - 1;    // x lies before mid
        else low = mid + 1; // x lies after mid
    }
    return -1;
}

// main
int main() {
    int A[] = { 2, 4, 5, 7, 13, 14, 15, 23 };
    cout << "Enter a number: ";
    int x;
    cin >> x;
    int index = binarySearch(A, sizeof(A) / sizeof(int), x);
    if (index != -1) cout << x << " found at " << index << " index" << endl;
    else cout << "Didnot found " << x << " in the array" << endl;
    return 0;
}
