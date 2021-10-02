#include<iostream>
#define MAX 100
using namespace std;

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

/**
 * @brief swap the elements of the array
 * @param arr[] array
 * @param x
 * @param y postions to swap x, y
 */
void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void bubble(int a[], int size) {
    int i = size - 1;
    while (i > 0) {
        if (a[i] < a[i - 1]) {
            swap(a, i, i - 1);
        }
        i++;
    }

}

/**
 * @brief sort the array using bubble sort
 * @param arr array to sort
 * @param size size of the array
 */
void bubble_sort(int a[], int size) {
    int i = 0;
    while (i < size - 1) {
        bubble(a, size);
        i++;
    }
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
    bubble_sort(arr, n);

    cout << "Sorted array" << endl;
    display(arr, n);

    return 0;
}
