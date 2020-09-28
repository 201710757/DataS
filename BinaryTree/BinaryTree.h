#ifndef __BIN_TREE_H__
#define __BIN_TREE_H__

typedef int BTData;

class BTreeNode
{
    public:
        BTreeNode(BTData btd);
        BTData data;
        BTreeNode * left;
        BTreeNode * right;
};

#endif
