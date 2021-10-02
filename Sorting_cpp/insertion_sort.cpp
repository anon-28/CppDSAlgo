#include <iostream>
#define MAX 100
using namespace std;

void insertIth(int a[], int n, int i) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
        a[j + 1] = a[j];
        j = j - 1;
    }
    a[j + 1] = key;
}

/**
 * @brief Sort the array using insertion sort
 *
 * @param a array of integers
 * @param n size of the array
 */
void insSort(int a[], int n) {
    int i = 1;
    while (i < n) {
        insertIth(a, n, i);
        i++;
    }
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
    insSort(arr, n);

    cout << "Sorted array" << endl;
    display(arr, n);
    return 0;
}
