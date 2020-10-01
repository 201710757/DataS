#include "UsefulHeap.h"
#include <iostream>
using namespace std;

int GetParentIDX(int idx)
{
    return idx/2;
}


Heap::Heap(PriorityComp pc)
{
    this->comp = pc;
    this->numOfData = 0;
}

int Heap::HIsEmpty()
{
    if(this->numOfData == 0)
        return TRUE;
    else return FALSE;
}

void Heap::HInsert(HData d)
{
    int idx = this->numOfData + 1;
    

    while(idx != 1)
    {
        if(this->comp(d, this->heapArr[GetParentIDX(idx)]) > 0)
        {
            this->heapArr[idx] = this->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx);
        }
        else break;
    }
    this->heapArr[idx] = d;
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
        if(h->comp(h->heapArr[GetLChildIDX(idx)], h->heapArr[GetRChildIDX(idx)]) < 0)
            return GetRChildIDX(idx);
        else return GetLChildIDX(idx);
    }
}

HData Heap::HDelete()
{
    HData lastElement = this->heapArr[this->numOfData];
    HData delData = this->heapArr[1];

    int parentIdx = 1;
    int childIdx;

    while(childIdx = GetHiPriChildIDX(this, parentIdx))
    {
        if(this->comp(lastElement, this->heapArr[childIdx]) >= 0) break;

        this->heapArr[parentIdx] = this->heapArr[childIdx];
        parentIdx = childIdx;
    }
    
    this->heapArr[parentIdx] = lastElement;
    this->numOfData -= 1;

    return delData;
}
