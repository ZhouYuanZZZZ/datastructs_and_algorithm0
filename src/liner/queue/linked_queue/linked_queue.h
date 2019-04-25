#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_LINKED_QUEUE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_LINKED_QUEUE_H

typedef struct {
    int data;
    struct LinkNodeQueue *next;
} LinkNodeQueue;

typedef struct {
    LinkNodeQueue *front,*rear;
}LinkedQueue;

LinkedQueue * initLinkedQueue();

int isLinkedQueueEmpty(LinkedQueue* queue);

void enLinkedQueue(LinkedQueue* queue,int elem);

int deLinkedQueue(LinkedQueue* queue);

void showLinkedQueue(LinkedQueue* queue);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_LINKED_QUEUE_H
