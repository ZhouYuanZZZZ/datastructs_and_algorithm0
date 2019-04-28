#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;


typedef struct LinkNodeForBiTree{
    BiTNode* data;
    struct LinkNodeForBiTree* next;

} LinkNodeForBiTree,*LinkStackForBiTree;

LinkStackForBiTree createLinkStackForBiTree();

void initLinkStackForBiTree(LinkStackForBiTree stack);

void pushLinkStackForBiTree(LinkStackForBiTree stack,BiTNode node);

BiTNode* popLinkStackForBiTree(LinkStackForBiTree stack);

int checkLinkStackEmptyForBiTree(LinkStackForBiTree stack);


//访问节点方法
void visitNode(BiTree tree);

//先序遍历
void preOrder(BiTree tree);

//中序遍历
void inOrder(BiTree tree);

//后序遍历
void postOrder(BiTree tree);

BiTree genTestTree();

#endif
