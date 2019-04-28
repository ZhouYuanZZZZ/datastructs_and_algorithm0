#include <malloc.h>
#include "bit_tree.h"
#include "stdio.h"


LinkStackForBiTree createLinkStackForBiTree(){
    LinkStackForBiTree  stackForBiTree = (LinkStackForBiTree)malloc(sizeof(LinkStackForBiTree));
    return stackForBiTree;
}

void initLinkStackForBiTree(LinkStackForBiTree stack){
    stack->data =  NULL;
    stack->next = NULL;
}

LinkNodeForBiTree *getLastNodePre(LinkStackForBiTree stack) {
    LinkNodeForBiTree *node = stack->next;

    if (node == NULL) {
        return NULL;
    }

    if(node->next == NULL){
        return stack;
    }

    while (node->next != NULL) {
        if (node->next->next == NULL) {
            return node;
        }
        node = node->next;
    }

    return node;
}

void pushLinkStackForBiTree(LinkStackForBiTree stack,BiTNode node){

    LinkNodeForBiTree* linkNodeForBiTree = (LinkNodeForBiTree *) malloc(sizeof(LinkNodeForBiTree));
    linkNodeForBiTree->data = &node;
    linkNodeForBiTree->next = NULL;

    LinkNodeForBiTree *pNode = getLastNodePre(stack);
    if (pNode == NULL) {
        stack->next = linkNodeForBiTree;
        return;
    }

    pNode->next->next = &node;
}

BiTNode* popLinkStackForBiTree(LinkStackForBiTree stack){
    LinkNodeForBiTree *pNode = getLastNodePre(stack);
    if (pNode == NULL) {
        return NULL;
    }

    LinkNodeForBiTree *node = pNode->next;
    pNode->next = NULL;

    BiTNode* biTNode = node->data;
    free(node);

    return biTNode;
}

int checkLinkStackEmptyForBiTree(LinkStackForBiTree stack){
    return stack->next == NULL;
}


BiTree genTestTree() {

    BiTNode *nodes[6];
    for (int i = 0; i < 6; i++) {
        nodes[i] = (BiTNode *) malloc(sizeof(BiTNode));
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

//访问节点方法
void visitNode(BiTree tree) {
    if (tree != NULL) {
        printf("%d ", tree->data);
    }

}

//先序遍历
void preOrder(BiTree tree) {
    if (tree != NULL) {

        visitNode(tree);

        preOrder(tree->lchild);

        preOrder(tree->rchild);
    }


}

//中序遍历
void inOrder(BiTree tree) {
    if (tree != NULL) {

        inOrder(tree->lchild);

        visitNode(tree);

        inOrder(tree->rchild);
    }
}

//后序遍历
void postOrder(BiTree tree) {
    if (tree != NULL) {

        postOrder(tree->lchild);

        postOrder(tree->rchild);

        visitNode(tree);
    }
}

//中序遍历非递归
void inOrder1(BiTNode node){

    //初始化栈
    LinkStackForBiTree* stack =  createLinkStackForBiTree();
    initLinkStackForBiTree(stack);

    BiTNode* p = &node;

    while(p!=NULL || checkLinkStackEmptyForBiTree(stack)){

        if(p!=NULL){

         pushLinkStackForBiTree(stack,*p);

        }

    }



}