#include<iostream>
#include "CLinkedList.h"
using namespace std;

int main(void)
{
    CList * list = new CList();
    int data, nodeNum;

    list->LInsert(3);
    list->LInsert(4);
    list->LInsertFront(1);

    if(list->LFirst(&data))
    {
        cout<<data<<" ";
        
        for(int i=0;i<list->LCount()*3-1;i++)
        {
            if(list->LNext(&data))
                cout<<data<<" ";
        }
    }
    cout<<endl;


    nodeNum = list->LCount();
    if(nodeNum != 0)
    {
        list->LFirst(&data);
        if(data == 1) list->LRemove();

        for(int i=0;i<list->LCount()-1;i++)
        {    
            list->LNext(&data);
            if(data == 1)
                list->LRemove();
        }   
    }

    if(list->LFirst(&data))
    {
        cout<<data<<" ";

        for(int i=0;i<list->LCount()-1;i++)
        {
            list->LNext(&data);
            cout<<data<<" ";
        }
        cout<<endl;
    }

    return 0;
}
