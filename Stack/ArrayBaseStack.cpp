#include<iostream>
#include<cstdlib>
#include "ArrayBaseStack.h"
using namespace std;

Stack::Stack()
{ 
    this->stackArr = new Data[STACK_LEN];
    this->topIndex = -1;
}

Stack::~Stack()
{
    if(this->topIndex != -1)
        delete [] stackArr;
}

int Stack::SIsEmpty()
{
    return (this->topIndex==-1) ? TRUE : FALSE;
}
void Stack::SPush(Data data)
{
    this->stackArr[++(this->topIndex)] = data;
}
Data Stack::SPop()
{
    if(this->SIsEmpty() == FALSE)
        return this->stackArr[(this->topIndex)--];
    else return -999;
}
Data Stack::SPeek()
{
    if(this->SIsEmpty() == FALSE)
        return this->stackArr[this->topIndex];
    else return -999;
}
