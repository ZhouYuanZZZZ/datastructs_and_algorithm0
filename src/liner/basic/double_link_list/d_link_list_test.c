#include "../../../common/utils/utils.h"
#include "d_link_list.h"

int main(){

    int *array = generalRandomIntArray(10, 100);
    DSL DL = createDLinkedList();
    createDLinkedListFromTail(DL, array, 10);

    showDLinkList(DL);


    return 0;
}