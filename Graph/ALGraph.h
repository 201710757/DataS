#ifndef __AL_H__
#define __AL_H__
#include "DLinkedList.h"

enum {A,B,C,D,E,F,G,H,I,J};

class ALGraph
{
    public:
        ALGraph(int nv);
        int numV;
        int numE;
        LinkedList * adjList[100];

        void GraphDestroy();
        void AddEdge(int fronV, int toV);
        void ShowGraphEdgeInfo();
};

#endif
