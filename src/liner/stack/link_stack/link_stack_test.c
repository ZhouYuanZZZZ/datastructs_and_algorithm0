#include <utils.h>
#include "link_stack.h"

int main(){

    LinkStack stack = createLinkStack();
    initLinkStack(stack);

    pushLinkStack(stack,123);
    pushLinkStack(stack,456);

    printf("length:%d\n",linkStackSize(stack));
    printf("pop:%d\n",popLinkStack(stack));
    printf("length:%d\n",linkStackSize(stack));

    pushLinkStack(stack,1);

    pushLinkStack(stack,2);

    pushLinkStack(stack,3);

    printf("pop:%d\n",popLinkStack(stack));



    
    return 0;
}