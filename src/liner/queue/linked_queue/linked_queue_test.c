#include "linked_queue.h"
#include "stdio.h"

int mainlink(){

    LinkedQueue *queue = initLinkedQueue();

    for(int i=0;i<10;i++){
        enLinkedQueue(queue,i);
    }

    showLinkedQueue(queue);

    enLinkedQueue(queue,666);
    enLinkedQueue(queue,777);
    enLinkedQueue(queue,888);
    deLinkedQueue(queue);

    showLinkedQueue(queue);

    return 0;
}