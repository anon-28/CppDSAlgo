/**
 * Selection Sort algorithm
 * Author: @its_Kumar
 */
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

/**
 * @brief find the location of the smallest element
 * @param arr[] array
 * @param start starting point of array
 * @param end ending point of array
*/
int locof_smallest(int arr[], int start, int end) {
    int i = start;
    int j = i;
    while (i <= end) {
        if (arr[i] < arr[j])
            j = i;
        i++;
    }
    return j;
}
/**
 * @brief sort the array using selection sort
 * @param arr array to sort
 * @param size size of the array
 */
void selection_sort(int arr[], int size) {
    int i = 0;
    while (i < size - 1) {
        int j = locof_smallest(arr, i, size - 1);
        swap(arr, i, j);
        i++;
    }
}

// main function
int main() {
    int arr[MAX], n;
    cout << "Enter an number: " << endl;
    cin >> n;

    // Assign random array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    display(arr, n);
    selection_sort(arr, n);

    cout << "Sorted array" << endl;
    display(arr, n);

    return 0;
}
