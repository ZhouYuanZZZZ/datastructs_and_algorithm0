#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_THREAD_BIT_TREE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_THREAD_BIT_TREE_H

typedef struct ThreadNode{
    int data;                                       //数据元素
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;                                  //左右线索标志
} ThreadNode,*ThreadTree;




ThreadTree genTestThreadTree();

//中序线索化二叉树
void inThread(ThreadTree p);

void createInThread(ThreadTree tree);

ThreadNode* getFirstNodeFromTree(ThreadTree tree);

ThreadNode* nextNodeFromNode(ThreadNode* node);

void inOrderThread(ThreadTree tree);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_THREAD_BIT_TREE_H


