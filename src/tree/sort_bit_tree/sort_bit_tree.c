#include "sort_bit_tree.h"
#include <stdio.h>
#include <mm_malloc.h>



sort_bit_tree create_sort_bit_tree(int* array,int len){

    sort_bit_tree* tree_p = (sort_bit_tree*)malloc(sizeof(sort_bit_tree*));
    *tree_p = NULL;

    for(int i=0;i<len;i++){
        //依次插入数据到二叉排序树中
        insert_data_to_sort_bit_tree(tree_p,*(array+i));
    }

    return *tree_p;
}


void insert_data_to_sort_bit_tree(sort_bit_tree *p, int data) {

    if (*p == NULL) {
        //建立二叉树节点
        *p = (sort_bit_tree) malloc(sizeof(sort_bit_tree_node));
        (*p)->data = data;
        (*p)->r_child = NULL;
        (*p)->l_child = NULL;
    }

    //树中存在相同关键字的节点
    if ((*p)->data == data) {
        return;
    }

    //插入左子树
    if (data < (*p)->data) {
        insert_data_to_sort_bit_tree(&((*p)->l_child), data);
    }

    //插入右子树
    if (data > (*p)->data) {
        insert_data_to_sort_bit_tree(&((*p)->r_child), data);
    }
}

void in_order(sort_bit_tree tree) {
    if (tree != NULL) {
        in_order(tree->l_child);
        visit_node(tree);
        in_order(tree->r_child);
    }
}

void visit_node(sort_bit_tree tree) {
    printf("%d ", tree->data);
}


