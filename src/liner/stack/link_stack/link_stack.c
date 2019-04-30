#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include "link_stack.h"

LinkStackEntityP createLinkStack() {

    LinkStack stack = (LinkStack) malloc(sizeof(LinkStack));

    LinkStackEntityP stackEntityP = (LinkStackEntityP) malloc(sizeof(struct LinkStackEntity));
    stackEntityP->stack = stack;

    return stackEntityP;
}

void initLinkStack(LinkStackEntityP stack) {

    stack->stack->data = -1;
    stack->stack->next = NULL;

    //栈顶指针指向栈头结点
    stack->top = stack->stack;

}


void pushLinkStack(LinkStackEntityP stackEntityP, int elem) {
    //建立栈节点
    LinkNode *node = (LinkNode *) malloc(sizeof(LinkNode));
    node->data = elem;
    node->next = NULL;

    //将节点加入到链栈中去
    stackEntityP->top->next = node;

    //栈顶指针加1
    stackEntityP->top = node;
}

//获取栈顶的前一个元素
LinkNode *getLinkStackTopPre(LinkStackEntityP linkStackEntityP) {

    LinkNode *node = linkStackEntityP->stack;

    while (node->next != linkStackEntityP->top) {
        node = node->next;
    }

    return node;

}

int popLinkStack(LinkStackEntityP linkStackEntityP) {

    //判断栈是否为空
    if (checkLinkStackEmpty(linkStackEntityP)) {
        printf("empty stack");

        return -1;
    }

    //栈顶节点
    LinkNode *topNode = linkStackEntityP->top;
    int elem = linkStackEntityP->top->data;

    //栈顶节点的前一个节点
    LinkNode *pNode = getLinkStackTopPre(linkStackEntityP);

    //栈顶指针减一
    linkStackEntityP->top = pNode;

    free(topNode);

    return elem;

}

int linkStackSize(LinkStackEntityP stackEntityP) {
    int count = 0;
    LinkNode *topNode = stackEntityP->top;
    LinkNode *p = stackEntityP->stack;
    while (p != topNode) {
        count++;
        p = p->next;
    }

    return count;
}

int getLinkStackTopElem(LinkStackEntityP linkStackEntityP) {
    //判断栈是否为空
    if (checkLinkStackEmpty(linkStackEntityP)) {
        printf("empty stack");

        return -1;
    }

    //栈顶节点
    LinkNode *topNode = linkStackEntityP->top;
    int elem = linkStackEntityP->top->data;

    return elem;

}

bool checkLinkStackEmpty(LinkStackEntityP linkStackEntityP) {

    //栈顶指针指向头结点,此栈为空
    return linkStackEntityP->top == linkStackEntityP->stack;
}
