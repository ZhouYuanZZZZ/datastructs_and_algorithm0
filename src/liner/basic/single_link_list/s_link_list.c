#include <stdio.h>
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

    SNode *pre = L;
    for (int i = 0; i < index; i++) {
        pre = pre->next;
    }

    SNode *node = (SNode *) malloc(sizeof(SNode));
    node->next = NULL;
    node->data = elem;

    node->next = pre->next;
    pre->next = node;
}


int removeElem(SL L, int index) {

    SNode *pre = L;
    for (int i = 0; i < index; i++) {
        pre = pre->next;
    }

    SNode *removeNode = pre->next;
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

SL mergeLinkList(SL L1, SL L2) {
    SNode *pa, *pb, *tailL3;

    SL L3 = createLinkedList();

    tailL3 = L3;
    pa = L1->next;
    pb = L2->next;

    while (pa != NULL && pb != NULL) {
        if (pa->data <= pb->data) {
            tailL3->next = pa;
            tailL3 = pa;
            pa = pa->next;
        } else {
            tailL3->next = pb;
            tailL3 = pb;
            pb = pb->next;
        }
    }

    if (pa != NULL) {
        tailL3->next = pa;
    }

    if (pb != NULL) {
        tailL3->next = pb;
    }

    free(L1);
    free(L2);

    return L3;
}

void reverseSeqlinkedList(SL L) {
    SNode *nextNode = L->next->next;

    SNode *node = L->next;
    node->next = NULL;

    SNode *r;

    while (nextNode != NULL) {

        r = nextNode->next;
        nextNode->next = node;

        node = nextNode;
        nextNode = r;
    }

    L->next = node;
}

void destroyLinkedList(SL L){
    SNode node;
    SNode* p = L->next;
    while(p!=NULL){
        node = *p;
        free(p);
        p = node.next;
    }
    free(L);
}