#include "ALGraph.h"
#include<iostream>
using namespace std;

int main(void)
{
    ALGraph * graph = new ALGraph(5);

    graph->AddEdge(A, B);
    graph->AddEdge(A, D); 
    graph->AddEdge(B, C); 
    graph->AddEdge(C, D); 
    graph->AddEdge(D, E); 
    graph->AddEdge(E, A); 

    graph->ShowGraphEdgeInfo();

    graph->GraphDestroy();

    return 0;
}
