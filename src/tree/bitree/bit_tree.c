#include <malloc.h>
#include "bit_tree.h"
#include "stdio.h"

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