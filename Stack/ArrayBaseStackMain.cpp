#include<iostream>
#include "ArrayBaseStack.h"
#include<cstdlib>

using namespace std;
int main(void)
{
    Stack *st = new Stack();

    cout <<st->topIndex<<endl;
    st->SPush(5);
    cout<<st->topIndex<<endl;
    st->SPush(6);
    cout<<st->topIndex<<endl;


    while(st->SIsEmpty() == FALSE)
    {
        cout<<"var : "<<st->SPop()<<endl;
    }




    return 0;
}
