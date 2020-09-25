#ifndef __LISTBASE_QUEUE__
#define __LISTBASE_QUEUE__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 100

typedef int Data;

class Node
{
    public:
        Data data;
        Node * next;
        Node();
        Node(Data d);
};

class Queue
{
    public:
        Node * front;
        Node * rear;
        
        Queue();

        int QIsEmpty();
        void Enqueue(Data data);
        Data Dequeue();
        Data QPeek();
        int NextPosIdx(int pos);
};
//Queue == CQueue

#endif
