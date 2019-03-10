#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H

typedef struct LinkNode{
    int data;
    struct LinkNode* next;

} LinkNode,*LinkStack;



LinkStack createLinkStack();

void initLinkStack(LinkStack stack);

void pushLinkStack(LinkStack stack,int elem);

int popLinkStack(LinkStack stack);

int linkStackSize(LinkStack stack);

int getLinkStackTopElem(LinkStack stack);

bool checkLinkStackEmpty(LinkStack stack);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
