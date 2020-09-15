#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

class Stack
{
    public:
        Data *stackArr;
        int topIndex;
        
        Stack();
        ~Stack();
        int SIsEmpty();

        void SPush(Data data);
        Data SPop();
        Data SPeek();
};

#endif




