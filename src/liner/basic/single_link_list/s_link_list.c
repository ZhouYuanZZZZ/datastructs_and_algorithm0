#include <stdio.h>
#include "malloc.h"
#include "s_link_list.h"


SL createLinkedList() {

    SL L = (SL) malloc(sizeof(SNode));
    L->next = NULL;
}

void createLinkedListFromHead(SL L, int a[], int len) {
    for (int i = 0; i < len; i++) {
        insertDataIntoListHead(L, *(a + i));
    }
}

//将单条数据头插法插入链表中
void insertDataIntoListHead(SL L, int data) {

    SNode *node = (SNode *) malloc(sizeof(SNode));
    node->data = data;

    node->next = L->next;
    L->next = node;
}

void showSLinkedList(SL L) {
    printf("[");
    SNode *currentNode = L->next;

    while (currentNode != NULL) {
        printf("%d ",currentNode->data);
        currentNode = currentNode->next;
    }

    printf("]");

}