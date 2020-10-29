#ifndef __HEAP_H__
#define __HEAP_H__

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef char HData;
typedef int Priority;


class HeapElement
{
    public:
        Priority pr;
        HData data;
};

class Heap
{
    public:
        int numOfData;
        HeapElement heapArr[HEAP_LEN];

        Heap();

        int HIsEmpty();

        void HInsert(HData d, Priority p);
        HData HDelete();
};

#endif
