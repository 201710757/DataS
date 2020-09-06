//
//  DLinkedList.h
//  Data
//
//  Created by 김지훈 on 2020/09/06.
//  Copyright © 2020 김지훈. All rights reserved.
//

#ifndef DLinkedList_h
#define DLinkedList_h

#define FALSE 0
#define TRUE 1
typedef int LData;

class Node
{
public:
    LData data;
    Node * next;
    
    Node(LData d);
};

class LinkedList
{
public:
    Node * head;
    Node * cur;
    Node * before;
    int numOfData;
    int (*comp)(LData d1, LData d2);
    
    LinkedList();
    
    void ListInit();
    void SInsert(LData data);
    void FInsert(LData data);

    int LFirst(LData * pdata);
    int LNext(LData * pdata);

    LData LRemove();
    int LCount();
    
    void SetSortRule(int (*comp)(LData d1, LData d2));
    
};
#endif /* DLinkedList_h */
