#include <malloc.h>
#include <stdbool.h>
#include "link_stack.h"

LinkStack createLinkStack() {

    LinkStack stack = (LinkStack) malloc(sizeof(LinkStack));

    return stack;
}

void initLinkStack(LinkStack stack) {
    stack->data = -1;
    stack->next = NULL;
}

LinkNode *getLastNodePre(LinkStack stack) {
    LinkNode *node = stack->next;

    if (node == NULL) {
        return NULL;
    }

    if(node->next == NULL){
        return stack;
    }

    while (node->next != NULL) {
        if (node->next->next == NULL) {
            return node;
        }
        node = node->next;
    }

    return node;
}

void pushLinkStack(LinkStack stack, int elem) {
    LinkNode *node = (LinkNode *) malloc(sizeof(LinkNode));
    node->data = elem;
    node->next = NULL;

    LinkNode *pNode = getLastNodePre(stack);
    if (pNode == NULL) {
        stack->next = node;
        return;
    }

    pNode->next->next = node;
}

int popLinkStack(LinkStack stack) {

    LinkNode *pNode = getLastNodePre(stack);
    if (pNode == NULL) {
        return -1;
    }

    LinkNode *node = pNode->next;
    pNode->next = NULL;

    int elem = node->data;
    free(node);

    return elem;

}

int linkStackSize(LinkStack stack) {
    int count = 0;
    LinkNode *node = stack->next;

    while (node != NULL) {
        count++;

        node = node->next;
    }

    return count;
}

int getLinkStackTopElem(LinkStack stack) {
    LinkNode *pNode = getLastNodePre(stack);
    if (pNode == NULL) {
        return -1;
    }


    return pNode->next->data;

}

bool checkLinkStackEmpty(LinkStack stack) {
    LinkNode *pNode = getLastNodePre(stack);

    return pNode == stack;
}
