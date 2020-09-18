#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef char Data;
class Node
{
    public:
        Data data;
        Node * next;
        Node(Data d);
};
class Stack
{
    public:
        Node * head;
        
        Stack();
        ~Stack();
        int SIsEmpty();

        void SPush(Data data);
        Data SPop();
        Data SPeek();
        

        void infix(char * clist);
        void prefix(char * clist);
        void postfix(char * clist);
        int calcStack(char * clist);
};

#endif




