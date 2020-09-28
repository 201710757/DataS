#include "Deque.h"
#include <iostream>
using namespace std;
int main(void)
{
    Deque * q = new Deque();

    q->DQAddFirst(2);
    q->DQAddFirst(1);
    q->DQAddLast(3);
    q->DQAddLast(4);

    while(!(q->DQIsEmpty()))
    {
        cout<<q->DQRemoveFirst()<<" ";
    }

    return 0;
}
