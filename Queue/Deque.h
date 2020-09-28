#ifndef __DEQUE_H__
#define __DEQUE_H__
#define TRUE 1
#define FALSE 0

typedef int Data;


class Node
{
    public:
        Node(Data d);
        Node();

        Data data;
        Node * next;
        Node * prev;
};

class Deque
{
    public:
        Node * head;
        Node * tail;

        Deque();

        int DQIsEmpty();
        void DQAddFirst(Data d);
        void DQAddLast(Data d);
        Data DQRemoveFirst();
        Data DQRemoveLast();
        Data DQGetFirst();
        Data DQGetLast();
};

#endif
