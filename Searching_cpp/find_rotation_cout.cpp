#include <iostream>

using namespace std;


/**
 * @brief Variation of binary search to find out how many times a sorted array is rotated.
 *
 * @param A array
 * @param n size of array
 * @return int count of rotations
 */
int findRotationCount(int A[], int n) {
    int low, high = n - 1;
    while (low <= high) {
        if (A[low] <= A[high]) return low;
        int mid = (low + high) / 2;
        int next = (mid + 1) % n, prev = (mid + n - 1) % n;
        if (A[mid] <= A[next] && A[mid] <= A[prev])
            return mid;
        else if (A[mid] <= A[high]) high = mid - 1;
        else if (A[mid] >= A[low]) low = mid + 1;

    }
    return -1;
}

// main
int main() {
    int A[] = { 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int count = findRotationCount(A, sizeof(A) / sizeof(int));
    cout << "The array is rotated " << count << " times" << endl;

    return 0;
}
