#include <iostream>
#include "Deque.h"
using namespace std;

Node::Node()
{
    this->data = -1;
    this->next = NULL;
    this->prev = NULL;
}

Node::Node(Data d)
{
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
}

Deque::Deque()
{
    this->head = NULL;
    this->tail = NULL;
}

int Deque::DQIsEmpty()
{
    if(this->head == NULL) return TRUE;
    else return FALSE;
}
void Deque::DQAddFirst(Data d)
{
    Node * newNode = new Node(d);

    if(this->DQIsEmpty())
    {
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        newNode->next = this->head;
        this->head->prev = newNode;
        this->head = newNode;
    }
}
void Deque::DQAddLast(Data d)
{
    Node * newNode = new Node(d);

    if(this->DQIsEmpty())
    {
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        newNode->prev = this->tail;
        this->tail->next = newNode;
        this->tail = newNode;
    }
}
Data Deque::DQRemoveFirst()
{
    if(this->DQIsEmpty()) return -1;
 
    Data tmpData;
    Node * removeNode = new Node();
    removeNode = this->head;
    tmpData = removeNode->data;

    this->head = removeNode->next;
    //this->head->prev = NULL;

    delete removeNode;

    if(this->head == NULL) this->tail = NULL;
    else this->head->prev = NULL;

    return tmpData;
}
Data Deque::DQRemoveLast()
{
    if(this->DQIsEmpty()) return -1;
    
    Data tmpData;
    Node * removeNode = new Node();
    removeNode = this->tail;
    tmpData = removeNode->data;

    this->tail = removeNode->prev;
    //this->tail->next = NULL;

    delete removeNode;
    
    if(this->tail == NULL) this->head = NULL;
    else this->tail->next = NULL;

    return tmpData;
}
Data Deque::DQGetFirst()
{
    if(this->DQIsEmpty()) return -1;
    return this->head->data;
}
Data Deque::DQGetLast()
{
    if(this->DQIsEmpty()) return -1;
    return this->tail->data;
}

