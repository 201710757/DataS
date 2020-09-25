#ifndef __CIRCLE_QUEUE__
#define __CIRCLE_QUEUE__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 100

typedef int Data;

class Queue
{
    public:
        int front;
        int rear;
        Data queArr[QUE_LEN];
        Queue();

        int QIsEmpty();
        void Enqueue(Data data);
        Data Dequeue();
        Data QPeek();
        int NextPosIdx(int pos);
};
//Queue == CQueue

#endif
