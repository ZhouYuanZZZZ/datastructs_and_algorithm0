#include <stdio.h>

#include "linked_queue.h"


LinkedQueue *initLinkedQueue() {
    LinkNodeQueue *node = (LinkNodeQueue *) malloc(sizeof(LinkNodeQueue));
    node->next = NULL;

    LinkedQueue *queue = (LinkedQueue *) malloc(sizeof(LinkedQueue));
    queue->front = queue->rear = node;
}

int isLinkedQueueEmpty(LinkedQueue* queue){
    if(queue->front == queue->rear){
        return 1;
    }
    return 0;
}

void enLinkedQueue(LinkedQueue* queue,int elem){
    LinkNodeQueue* node = (LinkNodeQueue*)malloc(sizeof(LinkNodeQueue));
    node->next=NULL;
    node->data = elem;

    queue->rear->next = node;
    queue->rear = node;
}

int deLinkedQueue(LinkedQueue* queue){
    if(isLinkedQueueEmpty(queue) == 1){
        printf("queue empty");
        return -1;
    }

    LinkNodeQueue* node = queue->front->next;
    int elem = node->data;

    //元素出队
    if(queue->rear == node){
        queue->rear = queue->front;
    }else{
        queue->front->next = node->next;
    }

    free(node);

    return elem;
}

void showLinkedQueue(LinkedQueue* queue){
    printf("[");
    while(isLinkedQueueEmpty(queue) != 1){
        int elem = deLinkedQueue(queue);
        printf("%d ",elem);
    }
    printf("]\n");
}
