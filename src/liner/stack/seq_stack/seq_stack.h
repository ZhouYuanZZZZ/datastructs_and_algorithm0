#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_STACK_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_STACK_H

typedef struct StaticStack{

    int data[100];
    int top;
} SeqStaticStack;

SeqStaticStack* createStaticStack();

void initSeqStaticStack(SeqStaticStack* stack);

void pushSeqStaticStack(SeqStaticStack* stack,int elem);

int popSeqStaticStack(SeqStaticStack* stack);

int seqStaticStackSize(SeqStaticStack* stack);

int getSeqStaticStackTopElem(SeqStaticStack* stack);

int checkSeqStaticStackEmpty(SeqStaticStack* stack);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_SEQ_STACK_H
