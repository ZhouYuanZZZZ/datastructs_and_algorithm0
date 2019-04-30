#ifndef DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
#define DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H

typedef struct LinkNode{
    int data;
    struct LinkNode* next;

} LinkNode,*LinkStack;

typedef struct LinkStackEntity{
    //链栈
    LinkStack stack;
    //栈顶指针
    LinkNode* top;
}*LinkStackEntityP;



LinkStackEntityP createLinkStack();

void initLinkStack(LinkStackEntityP stack);

void pushLinkStack(LinkStackEntityP stack,int elem);

int popLinkStack(LinkStackEntityP stack);

int linkStackSize(LinkStackEntityP stack);

int getLinkStackTopElem(LinkStackEntityP stack);

bool checkLinkStackEmpty(LinkStackEntityP stack);

#endif //DATASTRUCTS_AND_ALGORITHM_IN_C_LINK_STACK_H
