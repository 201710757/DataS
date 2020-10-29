#ifndef __HEAP_H__
#define __HEAP_H__

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef char HData;
//typedef int Priority;
typedef int PriorityComp(HData d1, HData d2);


class Heap
{
    public:
        PriorityComp * comp;
        int numOfData;
        HData heapArr[HEAP_LEN];

        Heap(PriorityComp pc);

        int HIsEmpty();

        void HInsert(HData d);
        HData HDelete();
};

#endif
