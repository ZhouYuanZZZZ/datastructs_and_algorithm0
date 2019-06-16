#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_SORT_BIT_TREE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_SORT_BIT_TREE_H

typedef struct struct_sort_bit_tree{
    int data;
    struct struct_sort_bit_tree* l_child, *r_child;
}*sort_bit_tree,sort_bit_tree_node;


sort_bit_tree create_sort_bit_tree(int* array,int len);

//二叉排序树种插入节点
void insert_data_to_sort_bit_tree(sort_bit_tree *p,int data);

//中序遍历二叉排序树
void in_order(sort_bit_tree tree);

void visit_node(sort_bit_tree tree);



#endif
