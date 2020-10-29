#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    int maxIdx;
    int tmp;

    for(int i=0;i<n-1;i++)
    {
        maxIdx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            {
                maxIdx = j;

            }
        }
        tmp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = tmp;
    }
}
int main(void)
{
    int arr[] = {3,4,5,7,2,6,9,1};
    SelectionSort(arr, 8);

    for(int i=0;i<8;i++)
        cout<<arr[i]<<", ";
    cout<<endl;
    return 0;
}
