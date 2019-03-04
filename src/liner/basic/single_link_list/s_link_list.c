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

void createLinkedListFromTail(SL L, int a[], int len) {
    SNode *tail = L;
    for (int i = 0; i < len; i++) {
        tail = insertDataIntoListTail(tail, *(a + i));
    }
}

//将单条数据头插法插入链表中
void insertDataIntoListHead(SL L, int data) {

    SNode *node = (SNode *) malloc(sizeof(SNode));
    node->data = data;
    node->next = NULL;

    node->next = L->next;
    L->next = node;
}

//将单条数据尾插法插入链表中
SNode *insertDataIntoListTail(SNode *tail, int data) {

    SNode *node = (SNode *) malloc(sizeof(SNode));
    node->data = data;
    node->next = NULL;

    tail->next = node;

    return node;
}

int getElemByIndex(SL L, int index) {

    int currentIndex = -1;
    SNode *node = L->next;
    while (node != NULL) {
        currentIndex++;

        if (currentIndex == index) {
            return node->data;
        }

        node = node->next;
    }

    return -1;
}


int getIndexByElem(SL L, int elem) {

    int currentIndex = -1;
    SNode *node = L->next;
    while (node != NULL) {
        currentIndex++;

        if (node->data == elem) {
            return currentIndex;
        }

        node = node->next;
    }

    return -1;
}

int getListLength(SL L) {

    int currentIndex = -1;
    SNode *node = L->next;
    while (node != NULL) {
        currentIndex++;

        node = node->next;
    }

    return currentIndex + 1;
}

int insertElem(SL L, int index, int elem) {

    SNode* pre = L;
    for (int i = 0; i < index; i++) {
        pre = pre->next;
    }

    SNode* node = (SNode*)malloc(sizeof(SNode));
    node->next = NULL;
    node->data = elem;

    node->next = pre->next;
    pre->next = node;
}


int removeElem(SL L, int index) {

    SNode* pre = L;
    for (int i = 0; i < index; i++) {
        pre = pre->next;
    }

    SNode* removeNode = pre->next;
    pre->next = removeNode->next;

    free(removeNode);
}


void showSLinkedList(SL L) {
    printf("[");
    SNode *currentNode = L->next;

    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }

    printf("]\n");

}