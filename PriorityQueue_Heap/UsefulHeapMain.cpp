#include "UsefulHeap.h"
#include <iostream>
using namespace std;
int comp(char ch1, char ch2)
{
    return ch2 - ch1;
}

int main(void)
{
    Heap * heap = new Heap(comp);
    
    heap->HInsert('A');
    heap->HInsert('B');
    heap->HInsert('C');
    cout<<heap->HDelete()<<endl;

    heap->HInsert('A');
    heap->HInsert('B');
    heap->HInsert('C');
    cout<<heap->HDelete()<<endl;

    while(!(heap->HIsEmpty()))
    {
        cout<<heap->HDelete()<<endl;
    }

    return 0;
}
