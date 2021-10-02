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
int binarySearch(int a[], int n, int x, bool searchFirst) {
    int low = 0, high = n - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (x == a[mid]) {
            index = mid;
            if (searchFirst) high = mid - 1;
            else low = mid + 1;
        }    // found x return
        else if (x < a[mid]) high = mid - 1;    // x lies before mid
        else low = mid + 1; // x lies after mid
    }
    return index;
}


/**
 * @brief count the occurance of the element in the array ( variation of binary Search)
 *
 * @param a array
 * @param n size of array
 * @param x element to be searched
 * @return int total occurances
 */
int countOccurance(int a[], int n, int x) {
    int first = binarySearch(a, n, x, true);
    if (first == -1) return 0;
    int last = binarySearch(a, n, x, false);
    return (last - first + 1);
}



// main
int main() {
    int A[] = { 2, 4, 5, 7, 13, 13, 13, 14, 15, 23, 23 };
    cout << "Enter a number: ";
    int x;
    cin >> x;
    int count = countOccurance(A, sizeof(A) / sizeof(int), x);
    cout << x << " occured " << count << " times in the array" << endl;
    return 0;
}
