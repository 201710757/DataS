#include "SimpleHeap.h"
#include <iostream>
using namespace std;

int GetParentIDX(int idx)
{
    return idx/2;
}


Heap::Heap()
{
    this->numOfData = 0;
}

int Heap::HIsEmpty()
{
    if(this->numOfData == 0)
        return TRUE;
    else return FALSE;
}

void Heap::HInsert(HData d, Priority p)
{
    int idx = this->numOfData + 1;
    HeapElement nelem = {p, d};

    while(idx != 1)
    {
        if(p < this->heapArr[GetParentIDX(idx)].pr)
        {
            this->heapArr[idx] = this->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx);
        }
        else break;
    }
    this->heapArr[idx] = nelem;
    this->numOfData += 1;
}


int GetLChildIDX(int idx)
{
    return idx*2;
}
int GetRChildIDX(int idx)
{
    return GetLChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap * h, int idx)
{
    if(GetLChildIDX(idx) > h->numOfData) return 0;
    else if(GetLChildIDX(idx) == h->numOfData) return GetLChildIDX(idx);
    else
    {
        if(h->heapArr[GetLChildIDX(idx)].pr > h->heapArr[GetRChildIDX(idx)].pr)
            return GetRChildIDX(idx);
        else return GetLChildIDX(idx);
    }
}

HData Heap::HDelete()
{
    HeapElement lastElement = this->heapArr[this->numOfData];
    HData delData = this->heapArr[1].data;

    int parentIdx = 1;
    int childIdx;

    while(childIdx = GetHiPriChildIDX(this, parentIdx))
    {
        if(lastElement.pr <= this->heapArr[childIdx].pr) break;

        this->heapArr[parentIdx] = this->heapArr[childIdx];
        parentIdx = childIdx;
    }
    
    this->heapArr[parentIdx] = lastElement;
    this->numOfData -= 1;

    return delData;
}
