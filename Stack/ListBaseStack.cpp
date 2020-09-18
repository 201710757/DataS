#include<iostream>
#include<cstdlib>
#include "ListBaseStack.h"
using namespace std;
Node::Node(Data d)
{
    this->data = d;
    this->next = NULL;
}
Stack::Stack()
{
    this->head = NULL;
}

Stack::~Stack()
{
    delete (this->head);
}

int Stack::SIsEmpty()
{
    return (this->head == NULL) ? TRUE : FALSE;
}
void Stack::SPush(Data data)
{
    Node * d = new Node(data);
    d->next = this->head;
    this->head = d; 
}
Data Stack::SPop()
{
    if(this->SIsEmpty() == FALSE)
    {
        Data returnData = this->head->data;
        Node * delN = this->head;

        this->head = this->head->next;
        delete delN;
        
        return returnData;
    } 
    else return -999;
}
Data Stack::SPeek()
{
    if(this->SIsEmpty() == FALSE)
        return this->head->data; 
    else return -999;
}

void Stack::infix(char * clist)
{
    cout<<clist<<endl;
}
void Stack::prefix(char * clist)
{
    //
}
void Stack::postfix(char * clist)
{
    Stack * oper = new Stack();
    Stack * res = new Stack();

    int le = strlen(clist);

    for(int i=0;i<strlen(clist);i++)
    {
        if(clist[i] >= 48 && clist[i] <= 57)
            res->SPush(clist[i]);
        else
        {
            // +  -   *  /
            // 43 45 42 47
            switch(clist[i])
            {
                case '(': 
                    oper->SPush(clist[i]);
                    break;
                case ')':
                    while(oper->SPeek() != '(')
                        res->SPush(oper->SPop());
                    oper->SPop();
                    break;
                case '+':
                case '-': 
                    if(oper->SIsEmpty() == TRUE || oper->SPeek() == '(')
                        oper->SPush(clist[i]);
                    else
                    {
                        res->SPush(oper->SPop());
                        oper->SPush(clist[i]);
                    }
                    break;
                case '*':
                case '/':
                    oper->SPush(clist[i]);
                    break;
                default:
                    cout<<clist[i]<<" <-??"<<endl;
                    break;
            }
        }
    }
    while(oper->SIsEmpty() == FALSE)
        res->SPush(oper->SPop());
    
   
    char arr[500];
    int p=0;
    while(res->SIsEmpty() == FALSE)
        arr[p++] = res->SPop();
    
    for(int i=le-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int Stack::calcStack(char * clist)
{
    Stack * oper = new Stack();
    Stack * numb = new Stack();

    Stack * l = new Stack();
    int res = 0;
    int le = strlen(clist);
    
    char p1, p2;

    for(int i=le-1;i>=0;i--)
        l->SPush(clist[i]);
    while(l->SIsEmpty() == FALSE)
    {
        if(l->SPeek() >= 48 && l->SPeek() <= 57)
            numb->SPush(l->SPop()-48);
        else
        {
            p2 = numb->SPop();
            p1 = numb->SPop();
            switch(l->SPeek())
            {
                case '+':
                    numb->SPush(p1+p2);
                    break;
                case '-':
                    numb->SPush(p1-p2);
                    break;
                case '*':
                    numb->SPush(p1*p2);
                    break;
                case '/':
                    numb->SPush(p1/p2);
                    break;
                default:
                    break;
            }
            l->SPop(); 
        }
    }
    return numb->SPop();
}
