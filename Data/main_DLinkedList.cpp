//
//  DLinkedListMain.cpp
//  Data
//
//  Created by 김지훈 on 2020/09/06.
//  Copyright © 2020 김지훈. All rights reserved.
//  

#include<iostream>
#include"DLinkedList.h"
using namespace std;
int ben(int d1, int d2)
{
    return d1 < d2 ? 0:1;
}
int main(void)
{
    LinkedList * list = new LinkedList();
    list->SetSortRule(ben);
    int data;
    
    list->SInsert(11);
    list->SInsert(22);
    list->SInsert(13);
    list->SInsert(22);
    list->SInsert(15);
    list->SInsert(16);
    list->SInsert(17);
    
    cout<<"DATA CNT : "<<list->LCount()<<endl;
    
    if(list->LFirst(&data))
    {
        cout<<data<<" ";
        
        while(list->LNext(&data))
            cout<<data<<" ";
    }
    cout<<endl;
    
    if(list->LFirst(&data))
    {
        if(data == 22)
            list->LRemove();
        while(list->LNext(&data))
        {
            if(data == 22) list->LRemove();
        }
    }
    
    cout<<"RE DATA CNT : "<<list->LCount()<<endl;
    
    if(list->LFirst(&data))
    {
        cout<<data<<" ";
        
        while(list->LNext(&data))
            cout<<data<<" ";
    }
    cout<<endl;
    
}
