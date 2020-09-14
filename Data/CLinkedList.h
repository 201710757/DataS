#ifndef __CLinkedList_h__
#define __CLinkedList_h__

#define FALSE 0
#define TRUE 1

typedef int Data;


class Node
{
    public:
        /*For Employee*/
        char * name;
        /*============*/
        Data data;      //If employeeMain.cpp -> Employee Number
        Node * next;
        Node(Data d1, char *n);
};

class CList
{
    public:
        Node * tail;
        Node * cur;
        Node * before;
        int numOfData;
        CList();

        void LInsert(Data data, char *n);
        void LInsertFront(Data data, char *n);
        
        int LFirst(Data * data, char *pname);
        int LNext(Data * data, char *pname);
        Data LRemove();
        int LCount();
        Data returnEmployee(char *n, int cnt); //For employeeMain.cpp
        int checkSame(char * s1, char * s2);
};

#endif
