#ifndef __CLinkedList_h__
#define __CLinkedList_h__

#define FALSE 0
#define TRUE 1

typedef int Data;

class Node
{
    public:
        Data data;
        Node * next;
        Node(Data d1);
};

class CList
{
    public:
        Node * tail;
        Node * cur;
        Node * before;
        int numOfData;
        CList();

        void LInsert(Data data);
        void LInsertFront(Data data);

        int LFirst(Data * data);
        int LNext(Data * data);
        Data LRemove();
        int LCount();

};

#endif
