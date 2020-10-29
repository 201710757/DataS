#include "PriorityQueue.h"
#include "UsefulHeap.h"

PriQue::PriQue(PriorityComp pc)
{
    this->ppq = new PQueue(pc);
}

int PriQue::PQIsEmpty()
{
    return this->ppq->HIsEmpty();
}

void PriQue::PEnqueue(PQData data)
{
    this->ppq->HInsert(data);
}

PQData PriQue::PDequeue()
{
    return this->ppq->HDelete();
}
