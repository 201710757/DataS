#include<iostream>
using namespace std;

void MergeTwoArr(int arr[], int left, int mid, int right)
{
    int fIdx = left;
    int rIdx = mid + 1;

    int * sortArr = new int[right+1];
    int sIdx = left;

    while(fIdx <= mid && rIdx <= right)
    {
        if(arr[fIdx] <= arr[rIdx]) sortArr[sIdx] = arr[fIdx++];
        else sortArr[sIdx] = arr[rIdx++];

        sIdx++;
    }
    if(fIdx > mid)
        for(int i=rIdx;i<=right;i++,sIdx++)
            sortArr[sIdx] = arr[i];
    else
        for(int i=fIdx;i<=mid;i++,sIdx++)
            sortArr[sIdx] = arr[i];

    for(int i = left;i<=right;i++)
        arr[i] = sortArr[i];
    delete []sortArr;
}

void MergeSort(int arr[], int left, int right)
{
    int mid;

    if(left < right)
    {
        mid = (left+right)/2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);

        MergeTwoArr(arr, left, mid, right);
    }
}

int main(void)
{
    int arr[] = {6,5,4,3,2,1};
    MergeSort(arr, 0, 5);

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
