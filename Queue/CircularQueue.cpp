#include "CircularQueue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    this->front = 0;
    this->rear = 0;
}
int Queue::QIsEmpty()
{
    if(this->front == this->rear) return TRUE;
    else return FALSE;
}
int Queue::NextPosIdx(int pos)
{
    if(pos == QUE_LEN-1)
        return 0;
    else return pos+1;
}
void Queue::Enqueue(Data data)
{
    if(this->NextPosIdx(this->rear) == this->front)
    {
        cout<<"FULL"<<endl;
        exit(-1);
    }

    this->rear = this->NextPosIdx(this->rear);
    this->queArr[this->rear] = data;
}
Data Queue::Dequeue()
{
    if(this->QIsEmpty())
    {
        cout<<"EMPTY"<<endl;
        exit(-1);
    }
    this->front = this->NextPosIdx(this->front);
    return this->queArr[this->front];
}
Data Queue::QPeek()
{
    if(this->QIsEmpty())
    {
        cout<<"EMPTY"<<endl;
        exit(-1);
    }
    return this->queArr[this->NextPosIdx(this->front)];
}
