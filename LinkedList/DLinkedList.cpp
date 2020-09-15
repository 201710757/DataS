//
//  DLinkedList.cpp
//  Data
//
//  Created by 김지훈 on 2020/09/06.
//  Copyright © 2020 김지훈. All rights reserved.
//

#include "DLinkedList.h"
#include<iostream>
using namespace std;
Node::Node(LData d)
{
    data = d;
}

LinkedList::LinkedList()
{
    this->head = new Node(-1);
    this->head->next = NULL;
    this->comp = NULL;
    this->numOfData = 0;
}
int LinkedList::LFirst(LData *pdata)
{
    if(this->head->next == NULL) return FALSE;
    this->before = this->head;
    this->cur = this->head->next;
    
    *pdata = this->cur->data;
    return TRUE;
}
int LinkedList::LNext(LData *pdata)
{
    if(this->cur->next == NULL) return FALSE;
    
    this->before = this->cur;
    this->cur = this->cur->next;
    
    *pdata = this->cur->data;
    return TRUE;
}
LData LinkedList::LRemove()
{
    //cur del
    Node * rPos = this->cur;
    LData rData = this->cur->data;
    
    this->before->next = this->cur->next;
    this->cur = this->before;
    
    this->numOfData -= 1;
    delete rPos;
    return rData;
}

void LinkedList::FInsert(LData data)
{
    Node * newNode = new Node(data);
    
    newNode->next = this->head->next;
    this->head->next = newNode;
    
    this->numOfData += 1;
}
void LinkedList::SInsert(LData data)
{
    Node * newNode = new Node(-1);
    Node * pred = this->head;
    newNode->data = data;
    
    while(pred->next != NULL && this->comp(data, pred->next->data) != 0)
    {
        pred = pred->next;
    }
    
    newNode->next = pred->next;
    pred->next = newNode;
    
    (this->numOfData)++;
}
int LinkedList::LCount()
{
    return this->numOfData;
}
void LinkedList::SetSortRule(int (*comp)(LData, LData))
{
    this->comp = comp;
}
