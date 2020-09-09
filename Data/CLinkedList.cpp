#include <iostream>
#include "CLinkedList.h"
using namespace std;

CList::CList()
{
    this->tail = NULL;
    this->cur = NULL;
    this->before = NULL;
    this->numOfData = 0;
}
Node::Node(Data d1)
{
    this->data = d1;
}
int CList::LCount()
{
    return this->numOfData;
}
void CList::LInsert(Data data)
{
    Node * newNode = new Node(data);
    
    if(this->tail == NULL)
    {
        this->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = this->tail->next;
        this->tail->next = newNode;
        this->tail = newNode;
    }
    (this->numOfData)++;
}
void CList::LInsertFront(Data data)
{
    Node * newNode = new Node(data);
    
    if(this->tail == NULL)
    {
        this->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = this->tail->next;
        this->tail->next = newNode;
    }
    (this->numOfData)++;
}
int CList::LFirst(Data * pdata)
{
    if(this->tail == NULL)
        return FALSE;

    this->before = this->tail;
    this->cur = this->tail->next;

    *pdata = this->cur->data;
    return TRUE;
}
int CList::LNext(Data * pdata)
{
    if(this->tail == NULL) return FALSE;

    this->before = this->cur;
    this->cur = this->cur->next;
    
    *pdata = this->cur->data;
    return TRUE;
}
Data CList::LRemove()
{
    Node * rpos = this->cur;
    Data rdata = rpos->data;
    
    if(rpos == this->tail)
    {
        if(this->tail == this->tail->next)
            this->tail = NULL;
        else
            this->tail = this->before;
    }
    this->before->next = this->cur->next;
    this->cur = this->before;

    delete rpos;
    (this->numOfData)--;
    return rdata;
}
