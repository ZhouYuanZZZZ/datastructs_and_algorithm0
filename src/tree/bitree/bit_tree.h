#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_BIT_TREE_H

#include <stdbool.h>

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

typedef struct SeqQueueForBiTree{
    BiTNode data[10];
    int front,rear;
}SeqQueueForBiTree;

typedef struct StaticStackForBiTree{
    BiTNode datas[100];
    int top;
} SeqStaticStackForBiTree;

SeqQueueForBiTree* createSeqQueueForBiTree();

void enSeqQueueForBiTree(SeqQueueForBiTree *queue,BiTNode node);

BiTNode deSeqQueueForBiTree(SeqQueueForBiTree *queue);

//判断队空
int queueIsEmptyForBiTree(SeqQueueForBiTree* queue);

//判断队满
int queueIsFullForBiTree(SeqQueueForBiTree* queue);




//获取元素的个数
int getCountOfSeqQueueForBiTree(SeqQueueForBiTree* queue);

//打印队列元素
void showSeqQueueForBiTree(SeqQueueForBiTree* queue);


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

//中序非递归遍历
void inOrder1(BiTNode node);

//层次遍历
void levelOrder(BiTree tree);

BiTree genTestTree();

#endif
