#include "PriorityQueue.h"
#include <iostream>
using namespace std;

int comp(char c1, char c2)
{
    return c2 - c1;
}

int main(void)
{
    PriQue * pq = new PriQue(comp);
   

    pq->PEnqueue('A');
    pq->PEnqueue('B');
    pq->PEnqueue('C');
    pq->PEnqueue('D');
    pq->PEnqueue('E');

    cout<<pq->PDequeue()<<endl;


    pq->PEnqueue('A');
    pq->PEnqueue('B');
    pq->PEnqueue('C');
    pq->PEnqueue('D');
    pq->PEnqueue('E');
    
    cout<<pq->PDequeue()<<endl;

    while(!(pq->PQIsEmpty()))
        cout<<pq->PDequeue()<<endl;
    
    return 0;
}
