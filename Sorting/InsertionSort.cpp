#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    int nowData = 0;
    int j;
    for(int i = 1;i<n;i++)
    {
        nowData = arr[i];

        for(j=i-1;j>=0;j--)
        {
            if(arr[j] > nowData)
            {
                arr[j+1] = arr[j];
            }
            else 
            {   
                break;
            }
            
        }
        arr[j+1] = nowData;               
    }
}
int main(void)
{
    int arr[] = {6,5,4,3,2,1};
    InsertionSort(arr, 6);

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
