#include<iostream>
using namespace std;


/**
 * @brief Search an element in a circular sorted array using binary search
 *
 * @param A array
 * @param n size of the array
 * @param x element to be searched
 * @return int index of the element
 */
int circularArraySearch(int A[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (x == A[mid]) return mid;
        if (A[mid] <= A[high]) {
            if (x > A[mid] && x <= A[high])
                low = mid + 1;
            else high = mid - 1;
        } else {
            if (A[low] <= x && x < A[mid])
                high = mid - 1;
            else low = mid + 1;
        }
    }
    return -1;
}

// main
int main() {
    int A[] = { 14, 15, 23, 2, 4, 5, 7, 13, };
    cout << "Enter a number: ";
    int x;
    cin >> x;
    int index = circularArraySearch(A, sizeof(A) / sizeof(int), x);
    if (index != -1) cout << x << " found at " << index << " index" << endl;
    else cout << "Didnot found " << x << " in the array" << endl;

    return 0;
}
