#include <stdio.h>
#include "bit_tree.h"

int main(){

    BiTree tree = genTestTree();
    preOrder(tree);
    printf("\n");
    inOrder(tree);
    printf("\n");
    inOrder(tree);
    printf("\n");
    postOrder(tree);
    printf("\n");
    levelOrder(tree);

    return 0;
}