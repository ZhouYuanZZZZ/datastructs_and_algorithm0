#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H

typedef struct LinkNode{
    int data;
    struct LinkNode* next;
    struct LinkNode* top;
} LinkNode,*LinkStack;

LinkStack createStaticStack();

void initLinkStack(LinkStack stack);

void pushLinkStack(LinkStack stack,int elem);

int popLinkStack(LinkStack stack);

int LinkStackSize(LinkStack stack);

int getLinkStackTopElem(LinkStack stack);

int checkLinkStackEmpty(LinkStack stack);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
