#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void HeapSort(int arr[], int n)
{
    vector<int>v(arr, arr+n);
    make_heap(v.begin(), v.end());
    //sort_heap(v.begin(), v.end());
    for(int i=n-1;i>=0;i--)
    {
        arr[i] = v.front();
        pop_heap(v.begin(), v.end());
        v.pop_back();
    }
}
int main(void)
{
    int arr[] = {6,5,4,3,2,1};

    HeapSort(arr, 6);
    
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
