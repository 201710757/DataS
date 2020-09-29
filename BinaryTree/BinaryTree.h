#ifndef __BIN_TREE_H__
#define __BIN_TREE_H__

typedef int BTData;
typedef void VisitFuncPtr(BTData data);
class BTreeNode
{
    public:
        BTreeNode(BTData btd);
        BTData data;
        BTreeNode * left;
        BTreeNode * right;

        BTData GetData();
       

        BTreeNode * GetLeftSubTree();
        BTreeNode * GetRightSubTree();

        void MakeLeftSubTree(BTreeNode * sub);
        void MakeRightSubTree(BTreeNode * sub);
         
        typedef void DelFuncPtr(BTreeNode * bt);
        void InorderTraverse(BTreeNode * bt, DelFuncPtr action);
        void PreorderTraverse(BTreeNode * bt, DelFuncPtr action);
        void PostorderTraverse(BTreeNode * bt, DelFuncPtr action);

      
        void DeleteTree();
};

#endif
