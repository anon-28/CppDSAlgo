#include<iostream>
using namespace std;

/**
 * @brief Variation of binary search which always return last occurance
 *
 * @param a array
 * @param n size of the array
 * @param x element to be searched
 * @return int - index of the element
 */
int lastOccurance(int a[], int n, int x) {
    int low = 0, high = n - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == x) {
            index = mid;
            low = mid + 1;
        } else if (a[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return index;
}



// main
int main() {
    int A[] = { 2, 4, 5, 7, 13, 13, 13, 14, 15, 23 };
    cout << "Enter a number: ";
    int x;
    cin >> x;
    int index = lastOccurance(A, sizeof(A) / sizeof(int), x);
    if (index != -1) cout << x << " found at " << index << " index" << endl;
    else cout << "Didnot found " << x << " in the array" << endl;
    return 0;
}
