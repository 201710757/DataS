#include <iostream>
#include <cstring>
#include "CLinkedList.h"
using namespace std;

CList::CList()
{
    this->tail = NULL;
    this->cur = NULL;
    this->before = NULL;
    this->numOfData = 0;
}
Node::Node(Data d1, char *n)
{
    this->data = d1;
    this->name = n;
}
int CList::LCount()
{
    return this->numOfData;
}
int CList::checkSame(char * s1, char * s2)
{
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    if(s1_len == s2_len)
    {
        for(int i=0;i<s1_len;i++)
        {
            if(s1[i] != s2[i]) return -1;
        }
    }
    else return -1;

    return 1;
}
Data CList::returnEmployee(char* n, int cnt)
{
    char* s_name = new char[8];
    Data s_number;
    int t = 0;

    if(this->LCount() != 0)
    {
        this->LFirst(&s_number, s_name);
        
        if(strcmp(s_name, n) == 0)
        {
            for(int i=0;i<this->LCount()-1;i++)
            {
                LNext(&s_number, s_name);
                if(strcmp(s_name, n) == 0)
                {
                    break;
                }
            }
        }
        for(int i=0;i<(cnt % (this->numOfData)) + 1;i++)
        {
            LNext(&s_number, s_name);
        }
        return this->cur->data;
    }
    //int th = (cnt % (this->numOfData)) - 1;
    return this->cur->data;
    //n.compare() == 0 //same
}
void CList::LInsert(Data data, char *n)
{
    Node * newNode = new Node(data, n);
    
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
void CList::LInsertFront(Data data, char *n)
{
    Node * newNode = new Node(data, n);
    
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
int CList::LFirst(Data * pdata, char *pname)
{
    if(this->tail == NULL)
        return FALSE;

    this->before = this->tail;
    this->cur = this->tail->next;

    *pdata = this->cur->data;
    strcpy(pname, this->cur->name);
    //pname = (this->cur->name);
   
    return TRUE;
}
int CList::LNext(Data * pdata, char* pname)
{
    if(this->tail == NULL) return FALSE;

    this->before = this->cur;
    this->cur = this->cur->next;
    
    *pdata = this->cur->data;
    strcpy(pname, this->cur->name);
   // pname = (this->cur->name);

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
