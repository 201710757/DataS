#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int i, j, tmp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-i)-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main(void)
{
    int arr[] = {4,2,6,5,7,9,1};

    BubbleSort(arr, 7);

    for(int i=0;i<7;i++)
        cout<<arr[i]<<", ";
    cout<<endl;
    return 0;
}
