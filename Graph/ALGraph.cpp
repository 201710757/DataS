#include "ALGraph.h"
#include "DLinkedList.h"
#include<iostream>
using namespace std;
int WhoIsPrecede(int d1, int d2)
{
    return d1>d2?1:0;
}
ALGraph::ALGraph(int nv)
{
    this->numE = 0;
    this->numV = nv;
 
    for(int i=0;i<nv;i++)
    {
        this->adjList[i] = new LinkedList();
        this->adjList[i]->SetSortRule(WhoIsPrecede);
    } 
}
void ALGraph::GraphDestroy()
{
    for(int i=0;i<100;i++)
        if(this->adjList[i] != NULL) 
            delete adjList[i]; 
}
void ALGraph::AddEdge(int fromV, int toV)
{
   this->adjList[fromV]->SInsert(toV);
   this->adjList[toV]->SInsert(fromV);
   this->numE += 1; 
}
void ALGraph::ShowGraphEdgeInfo()
{
    int vx;

    for(int i=0;i<(this->numV);i++)
    {
        cout<<char(i+65)<<" Connected with : ";
        if(this->adjList[i]->LFirst(&vx))
        {
            cout<<char(vx+65)<<" ";
            while(this->adjList[i]->LNext(&vx))
                cout<<char(vx+65)<<" ";
        }
        cout<<endl;
    }
}
