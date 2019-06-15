#include <stdio.h>

#include "d_link_list.h"


DSL createDLinkedList() {

    DSL DL = (DSL) malloc(sizeof(DSNode));
    DL->next = NULL;
    DL->prior = NULL;

    return DL;
}

void createDLinkedListFromTail(DSL DL, int a[], int len) {

    DSNode *node = DL;
    for (int i = 0; i < len; i++) {
        node = inserDSNodetoTail(node, *(a + i));
    }

}

DSNode *inserDSNodetoTail(DSNode *tail, int elem) {

    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->data = elem;


    tail->next = node;
    node->prior = tail;
    node->next = NULL;

    tail = node;

    return tail;
}

void showDLinkList(DSL DL) {

    DSNode *node = DL->next;
    DSNode *lastNode;

    printf("[");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;

        if (node != NULL) {
            lastNode = node;
        }
    }
    printf("]\n");

    printf("[");
    while (lastNode != DL) {
        printf("%d ", lastNode->data);
        lastNode = lastNode->prior;
    }
    printf("]\n");
}

void inserDSNodetoHead(DSL DL, int elem) {

    //建立节点
    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->data = elem;

    //挂链操作
    node->next = DL->next;
    node->prior = DL;

    if (DL->next != NULL) {
        DL->next->prior = node;
    }
    DL->next = node;

}

void createDLinkedListFromHead(DSL DL, int a[], int len) {

    for (int i = 0; i < len; i++) {
        inserDSNodetoHead(DL, a[i]);
    }
}

DSNode *createDSNode(int elem) {

    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->next = NULL;
    node->prior = NULL;
    node->data = elem;

    return node;
}

void insertIntoDLinkedList(DSL DL, int index, int elem) {

    //找到插入位置
    DSNode *node = DL->next;
    int count = -1;

    while (node != NULL) {
        count++;

        if (count == index) {

            DSNode *insertNode = createDSNode(elem);
            insertNode->next = node;
            insertNode->prior = node->prior;

            node->prior->next = insertNode;
            node->prior = insertNode;
        }

        node = node->next;
    }
}

void deleteFromDLinkedList(DSL DL, int index) {

    int count = -1;
    DSNode *node = DL->next;

    while (node != NULL) {
        count++;

        if (index == count) {
            node->prior->next = node->next;
            node->next->prior = node->prior;

            free(node);

            return;
        }

        node = node->next;
    }
}

int getDLinkedListLength(DSL DL){

    int count = -1;
    DSNode *node = DL->next;

    while(node!=NULL){
        count++;
        node = node->next;
    }

    return count++;
}