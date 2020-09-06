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

int main(void)
{
    LinkedList * list = new LinkedList();
    int data;
    
    list->FInsert(11);
    list->FInsert(22);
    list->FInsert(13);
    list->FInsert(22);
    list->FInsert(15);
    list->FInsert(16);
    list->FInsert(17);
    
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
