#include <bits/stdc++.h>
#include<vector>
using namespace std;
void swap( int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {

        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }

    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
    int pivot = partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:"
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
