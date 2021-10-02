#include<iostream>
using namespace std;

/**
 * @brief Binary search
 *
 * @param a array of integers
 * @param low lower index of the array
 * @param high higher index of the array
 * @param x element to be searched
 * @return int index of the searched element
 */
int binarySearch(int a[], int low, int high, int x) {
    if (low <= high) {
        int mid = low + (high - low) / 2; // (low+high) may overflow
        if (x == a[mid]) return mid;    // found x return
        else if (x < a[mid]) return binarySearch(a, low, mid - 1, x);    // x lies before mid
        else return binarySearch(a, mid + 1, high, x); // x lies after mid
    }
    return -1;
}

// main
int main() {
    int A[] = { 2, 4, 5, 7, 13, 14, 15, 23 };
    cout << "Enter a number: ";
    int x;
    cin >> x;
    int index = binarySearch(A, 0, (sizeof(A) / sizeof(int)) - 1, x);
    if (index != -1) cout << x << " found at " << index << " index" << endl;
    else cout << "Didnot found " << x << " in the array" << endl;
    return 0;
}
