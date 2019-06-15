#include <stdio.h>

#include "seq_queue.h"

SeqQueue* createSeqQueue(){

    SeqQueue *queue = (SeqQueue*)malloc(sizeof(queue));
    queue->front = 0;
    queue->rear = 0;

    return queue;
}

void enSeqQueue(SeqQueue *queue,int elem){
    if(queueIsFull(queue) == 1){
        printf("queue full\n");
        return;
    }

    queue->data[queue->rear] = elem;
    queue->rear = (queue->rear+1)%MAX_SIZE;
}

int deSeqQueue(SeqQueue *queue){
    if(queueIsEmpty(queue) == 1){
        printf("queue empty");
        return -1;
    }

    int elem = queue->data[queue->front];

    queue->front = (queue->front+1)%MAX_SIZE;

    return elem;
}


//判断队列空
int queueIsEmpty(SeqQueue* queue){

    if(queue->front == queue->rear){
        return 1;
    }
    return 0;
}

//判断队满
int queueIsFull(SeqQueue* queue){
    if((queue->rear+1)%MAX_SIZE == queue->front){
        return 1;
    }

    return 0;
}

//获取元素的个数
int getCountOfSeqQueue(SeqQueue* queue){

    return (queue->rear - queue->front +MAX_SIZE)%MAX_SIZE;
}

void showSeqQueue(SeqQueue* queue){

    printf("[");
    while(!queueIsEmpty(queue)){
        int elem = deSeqQueue(queue);
        printf("%d ",elem);
    }
    printf("]\n");

}