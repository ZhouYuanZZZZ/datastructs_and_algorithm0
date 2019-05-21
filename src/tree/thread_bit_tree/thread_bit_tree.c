#include <malloc.h>
#include <stdio.h>
#include "thread_bit_tree.h"


ThreadTree genTestThreadTree() {

    ThreadNode *nodes[6];
    for (int i = 0; i < 6; i++) {
        nodes[i] = (ThreadNode *) malloc(sizeof(ThreadNode));
        nodes[i]->data = i;
        nodes[i]->rchild = NULL;
        nodes[i]->lchild = NULL;
    }

    nodes[0]->lchild = nodes[1];
    nodes[0]->rchild = nodes[2];

    nodes[1]->lchild = nodes[3];
    nodes[1]->rchild = nodes[4];

    nodes[2]->rchild = nodes[5];

    return nodes[0];

}

void inThread(ThreadTree p, ThreadTree pre) {

    if (p != NULL) {

        //线索化左子树
        inThread(p->lchild, pre);

        //左子树为空 建立前驱索引
        if (p->lchild == NULL) {
            p->lchild = pre;
            p->ltag = 1;
        } else {
            p->ltag = 0;
        }

        //右子树为空 建立后继节点
        if (pre != NULL && pre->rchild == NULL) {
            pre->rchild = p;
            p->rtag = 1;
        } else {
            p->rtag = 0;
        }

        pre = p;

        //线索化右子树
        inThread(p->rchild, pre);
    }

}

void createInThread(ThreadTree tree) {

    ThreadTree* pre = NULL;
    if (tree != NULL) {
        inThread(tree, pre);
    }
}

//求中序遍历的第一个节点
ThreadNode* getFirstNodeFromTree(ThreadTree tree) {

    //此时节点肯定是有左节点的
    while (tree->ltag == 0) {
        tree = tree->lchild;
    }

    //此时没有左节点 所以中序遍历访问之
    return tree;

}

//节点p在中序序列下的后继节点
ThreadNode* nextNodeFromNode(ThreadNode* node) {

    if (node->rtag == 0) {
        //有右子树的情况
        return getFirstNodeFromTree(node->rchild);
    } else {
        //没有右子树 直接返回后继 可能为NULL
        return node->rchild;
    }
}

//遍历线索化二叉树
void inOrderThread(ThreadTree tree){

    ThreadNode* p=getFirstNodeFromTree(tree);

    while(p!=NULL){
        printf("%d ",p->data);

        p=nextNodeFromNode(p);
    }
}

