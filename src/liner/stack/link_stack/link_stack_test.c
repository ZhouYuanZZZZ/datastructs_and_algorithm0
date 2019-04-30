#include <utils.h>
#include "link_stack.h"

int main5569878() {

    LinkStackEntityP linkStackEntityP = createLinkStack();
    initLinkStack(linkStackEntityP);

    pushLinkStack(linkStackEntityP, 100);
    pushLinkStack(linkStackEntityP, 101);
    pushLinkStack(linkStackEntityP, 102);
    pushLinkStack(linkStackEntityP, 103);
    pushLinkStack(linkStackEntityP, 104);

    printf("length:%d\n", linkStackSize(linkStackEntityP));
    printf("pop:%d\n", popLinkStack(linkStackEntityP));
    printf("length:%d\n", linkStackSize(linkStackEntityP));

    pushLinkStack(linkStackEntityP, 1);

    pushLinkStack(linkStackEntityP, 2);

    pushLinkStack(linkStackEntityP, 3);

    printf("pop:%d\n", popLinkStack(linkStackEntityP));

    printf("-----------------------\n");
    while(!checkLinkStackEmpty(linkStackEntityP)){
        int elem = popLinkStack(linkStackEntityP);
        printf("%d\n",elem);
    }


    return 0;
}