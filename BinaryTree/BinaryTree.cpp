#include "BinaryTree.h"
#include <iostream>
using namespace std;

BTreeNode::BTreeNode(BTData btd)
{
    this->data = btd;
    this->left = NULL;
    this->right = NULL;
}

BTData BTreeNode::GetData()
{
    return this->data;
}

BTreeNode* BTreeNode::GetLeftSubTree()
{
    return this->left;
}
BTreeNode* BTreeNode::GetRightSubTree()
{
    return this->right;
}

void BTreeNode::MakeLeftSubTree(BTreeNode * sub)
{
    if(this->left != NULL) delete this->left;
    this->left = sub;
}
void BTreeNode::MakeRightSubTree(BTreeNode * sub)
{
    if(this->right != NULL) delete this->right;
    this->right = sub;
}

//typedef void VisitFuncPtr(BTData data);
//typedef void DelFuncPtr(BTreeNode * bt);
void BTreeNode::InorderTraverse(BTreeNode * bt, DelFuncPtr action)
{
    if(bt == NULL) return;

    this->InorderTraverse(bt->left, action);
    //action(bt->GetData());
    action(bt);
    this->InorderTraverse(bt->right, action);
}

void BTreeNode::PreorderTraverse(BTreeNode * bt, DelFuncPtr action)
{
    if(bt == NULL) return;
    
    action(bt);
    //action(bt->GetData());
    this->PreorderTraverse(bt->left, action);
    this->PreorderTraverse(bt->right, action);
}

void BTreeNode::PostorderTraverse(BTreeNode * bt, DelFuncPtr action)
{
    if(bt == NULL) return;

    this->PostorderTraverse(bt->left, action);
    this->PostorderTraverse(bt->right, action);
    action(bt);
    //action(bt->GetData());
}

void DeleteNode(BTreeNode * bt)
{
    cout<<"DEL : "<<bt->GetData()<<endl;
    delete bt;
}
void BTreeNode::DeleteTree()
{
    this->InorderTraverse(this, DeleteNode);
}

