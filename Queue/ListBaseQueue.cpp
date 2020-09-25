#include "ListBaseQueue.h"
#include <iostream>
using namespace std;


Node::Node()
{
    this->next = NULL;
    this->data = -1;
}
Node::Node(Data d)
{
    this->next = NULL;
    this->data = d;
}


Queue::Queue()
{
    this->front = new Node();
    this->rear = new Node();
}
int Queue::QIsEmpty()
{
    if(this->front == NULL) return TRUE;
    else return FALSE;
}

void Queue::Enqueue(Data data)
{
    Node * newNode = new Node(data);
    if(this->QIsEmpty())
    {
        this->front = newNode;
        this->rear = newNode;
    }
    else
    {
        this->rear->next = newNode;
        this->rear = newNode;
    }
}
Data Queue::Dequeue()
{
    if(this->QIsEmpty())
    {
        cout<<"EMPTY"<<endl;
        exit(-1);
    }
    Node * res = this->front;
    Data result = res->data;
    this->front = this->front->next;
    
    delete res;
    return result; 
}
Data Queue::QPeek()
{
    if(this->QIsEmpty())
    {
        cout<<"EMPTY"<<endl;
        exit(-1);
    }
    return this->front->data; 
}
