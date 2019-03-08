#include <malloc.h>
#include "link_stack.h"

LinkStack createStaticStack(){
    LinkStack stack = (LinkStack)malloc(sizeof(LinkStack));
}

void initLinkStack(LinkStack stack){
    stack->next = NULL;
    stack->top = NULL;
}

void pushLinkStack(LinkStack stack,int elem){
     LinkNode* node = (LinkNode*)malloc(sizeof(LinkNode));
}
