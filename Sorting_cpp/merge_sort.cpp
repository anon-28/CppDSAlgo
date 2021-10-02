#include<iostream>
#define MAX 100
using namespace std;


/**
 * @brief merge process of the merge sort
 *
 * @param a array
 * @param s stating index
 * @param m middle index
 * @param e end index
 */
void merge(int a[], int s, int m, int e) {
    int* buffer = new int[e + 1]; //for the total size of the merged array
    int k = s;
    while (k <= e) {
        buffer[k] = a[k];
        k += 1;
    }

    int i = s;
    int j = m + 1;
    k = s;

    while (i <= m && j <= e) {
        if (buffer[i] <= buffer[j]) {
            a[k] = buffer[i];
            i += 1;
        } else {
            a[k] = buffer[j];
            j += 1;
        }
        k += 1;
    }
    while (i <= m) {
        a[k] = buffer[i];
        k += 1;
        i += 1;
    }
    while (j <= e) {
        a[k] = buffer[j];
        k += 1;
        j += 1;
    }
    delete[] buffer;
}


/**
 * @brief sort the array using merge sort
 *
 * @param a array
 * @param s start index
 * @param e end index
 */
void mergeSort(int a[], int s, int e) {
    if (s >= e) return;
    int m = (s + e) / 2;
    mergeSort(a, s, m);
    mergeSort(a, m + 1, e);
    merge(a, s, m, e);
}

/**
 * @brief Display / Print the array
 * @param arr array to print
 * @param size size of the array
*/
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << ", ";
    cout << endl;
}


// main
int main() {
    int arr[MAX], n;
    cout << "Enter an number: " << endl;
    cin >> n;

    // Assign random array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    display(arr, n);
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array" << endl;
    display(arr, n);
    return 0;
}
