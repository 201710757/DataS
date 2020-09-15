#include<iostream>
#include"ListBaseStack.h"
using namespace std;
int main(void)
{
    Stack * st = new Stack();
    
    char p[] = "1+2*3";
   // st->SPush(5);
   // st->SPush(6);
    
    st->postfix(p);
   
/*
    while(st->SIsEmpty() == FALSE)
    {
        cout<<"data : "<<st->SPop()<<endl;
    }
    */
    return 0;
}
