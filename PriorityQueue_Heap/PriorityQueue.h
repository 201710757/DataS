#ifndef __PRIORITY_QUEUE_H__
#define __PRIORITY_QUEUE_H__

#include "UsefulHeap.h"

typedef Heap PQueue;
typedef HData PQData;

class PriQue
{
    public:
        PQueue * ppq;
        
        PriQue(PriorityComp pc);

        int PQIsEmpty();
        void PEnqueue(PQData data);
        PQData PDequeue();
};

#endif
