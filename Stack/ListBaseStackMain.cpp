#include<iostream>
#include"ListBaseStack.h"
using namespace std;
int main(void)
{
    Stack * st = new Stack();
    
    char p[] = "(2+5)*3*(2+1)";
   // st->SPush(5);
   // st->SPush(6);
    
    st->postfix(p);

    char p1[] = "25+321+**";
    cout<<"\n\nRES : "<<st->calcStack(p1)<<endl;
    char p2[] = "12+3*";
    cout<<"RES : "<<st->calcStack(p2)<<endl;

    return 0;
}
