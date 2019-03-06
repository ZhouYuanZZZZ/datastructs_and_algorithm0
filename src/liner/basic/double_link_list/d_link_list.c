#include <stdio.h>
#include "malloc.h"
#include "d_link_list.h"


DSL createDLinkedList(){

    DSL DL = (DSL) malloc(sizeof(DSNode));
    DL->next = NULL;
    DL->prior = NULL;

    return DL;
}

void createDLinkedListFromTail(DSL DL, int a[],int len){

    DSNode* node = DL;
    for(int i = 0;i<len;i++){
        node = inserDSNodetoTail(node,*(a+i));
    }

}

DSNode* inserDSNodetoTail(DSNode* tail,int elem){

    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->data = elem;


    tail->next = node;
    node->prior = tail;
    node->next = NULL;

    tail = node;

    return tail;
}

void showDLinkList(DSL DL){

    DSNode* node = DL->next;
    DSNode* lastNode;

    printf("[");
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;

        if(node != NULL){
            lastNode = node;
        }
    }
    printf("]\n");

    printf("[");
    while(lastNode!=DL){
        printf("%d ",lastNode->data);
        lastNode = lastNode->prior;
    }
    printf("]\n");
}