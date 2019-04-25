#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_QUEUE_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_QUEUE_H

#define MAX_SIZE 7
typedef struct {
    int data[MAX_SIZE];
    int front,rear;
} SeqQueue;

SeqQueue* createSeqQueue();

void enSeqQueue(SeqQueue *queue,int elem);

int deSeqQueue(SeqQueue *queue);

int queueIsEmpty(SeqQueue* queue);

//判断队满
int queueIsFull(SeqQueue* queue);

//获取元素的个数
int getCountOfSeqQueue(SeqQueue* queue);

//打印队列元素
void showSeqQueue(SeqQueue* queue);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_QUEUE_H
