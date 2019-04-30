#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H

#include <stdbool.h>

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

typedef struct StaticStackForBiTree{
    BiTNode datas[100];
    int top;
} SeqStaticStackForBiTree;


SeqStaticStackForBiTree* createStaticStackForBiTree();

void initSeqStaticStackForBiTree(SeqStaticStackForBiTree* stack);

void pushSeqStaticStackForBiTree(SeqStaticStackForBiTree* stack,BiTNode node);

BiTNode* popSeqStaticStackForBiTree(SeqStaticStackForBiTree* stack);

int seqStaticStackSizeForBiTree(SeqStaticStackForBiTree* stack);

BiTNode getSeqStaticStackTopElemForBiTree(SeqStaticStackForBiTree* stack);

int checkSeqStaticStackEmptyForBiTree(SeqStaticStackForBiTree* stack);



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
