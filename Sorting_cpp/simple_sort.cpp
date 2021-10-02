/*
* Simple Sort algorithm
* author: @its_Kumar
*/

#include<iostream>
#define MAX 100

using namespace std;

int main() {
    int arr[MAX], n;
    cout << "Enter an number: " << endl;
    cin >> n;

    // Assign random array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    // Display the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;

    //Sorting the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1;j < n; j++)
            if (arr[j] < arr[i]) {
                // swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }

    // Display the sorted array
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}
