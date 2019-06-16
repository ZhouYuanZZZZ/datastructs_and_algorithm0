#include <stdio.h>
#include "thread_bit_tree.h"

int main12121(){

    ThreadTree tree =  genTestThreadTree();

    createInThread(tree);

    inOrderThread(tree);

    return 0;
}