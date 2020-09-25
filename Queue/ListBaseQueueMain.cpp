#include "ListBaseQueue.h"
#include <iostream>
using namespace std;
int main(void)
{
    Queue * q = new Queue();

    q->Enqueue(15);
    q->Enqueue(16);
    q->Enqueue(17);
    q->Enqueue(18);
    q->Enqueue(19);

    while(!q->QIsEmpty())
    {
        cout<<q->Dequeue()<<endl;
    }
    return 0;
}
