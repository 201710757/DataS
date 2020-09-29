#include<iostream>
#include"BinaryTree.h"
using namespace std;

void ShowIntData(BTData data);
int main(void)
{
    BTreeNode * n1 = new BTreeNode(1);
    BTreeNode * n2 = new BTreeNode(2);
    BTreeNode * n3 = new BTreeNode(3);
    BTreeNode * n4 = new BTreeNode(4);

    n1->MakeLeftSubTree(n2);
    n1->MakeRightSubTree(n3);
    n2->MakeLeftSubTree(n4);

    //cout<<(n1->GetLeftSubTree())->GetData()<<endl;

    //cout<<((n1->GetLeftSubTree())->GetLeftSubTree())->GetData()<<endl;

    n1->DeleteTree();
    if(n1->GetData() < 0) cout<<"All Clear!!"<<endl;
    else cout<<n1->GetData()<<endl;
//    n1->InorderTraverse(n1, ShowIntData);

    return 0;
}
void ShowIntData(BTData data)
{
    cout<<data<<"!"<<endl;
}


