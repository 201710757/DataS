#include<iostream>
using namespace std;
void swap(int arr[], int n1, int n2)
{
    int tmp = arr[n1];
    arr[n1] = arr[n2];
    arr[n2] = tmp;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[left];
    int low = left + 1;
    int high = right;

    while(low <= high)
    {
        while(pivot > arr[low]) low++;
        while(pivot < arr[high]) high--;

        if(low <= high) swap(arr, low, high);
    }

    swap(arr, left, high);
    return high;
}

void QuickSort(int arr[], int left, int right)
{
    if(left <= right)
    {
        int pivot = partition(arr, left, right);
        QuickSort(arr, left, pivot-1);
        QuickSort(arr, pivot+1, right);
    }
}

int main(void)
{
    int arr[] = {6,5,4,3,2,1};
    QuickSort(arr, 0, 5);

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
