#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_D_LINK_LIST_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_D_LINK_LIST_H
#include <malloc.h>

//双链表节点
typedef struct DSNode{
    int data;
    struct DSNode* next , * prior;
} DSNode,* DSL;


//创建双链表
DSL createDLinkedList();

//头插法建议双链表
void createDLinkedListFromHead(DSL DL,int a[],int len);

//尾插法建立双链表
void createDLinkedListFromTail(DSL DL, int a[],int len);

void inserDSNodetoHead(DSL DL,int elem);

DSNode* inserDSNodetoTail(DSNode* tail,int elem);

DSNode* createDSNode(int elem);

void insertIntoDLinkedList(DSL DL,int index,int elem);

void deleteFromDLinkedList(DSL DL,int index);

int getDLinkedListLength(DSL DL);

void showDLinkList(DSL DL);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_D_LINK_LIST_H
