#include "../../../common/utils/utils.h"
#include "d_link_list.h"

void testCreateDLinkedListFromTail(){
    int *array = generalRandomIntArray(10, 100);
    DSL DL = createDLinkedList();
    createDLinkedListFromTail(DL, array, 10);
    showDLinkList(DL);
}

void testCreateDLinkedListFromHead(){
    int *array = generalRandomIntArray(10, 100);
    showIntArray1(array,10);

    DSL DL = createDLinkedList();
    createDLinkedListFromHead(DL,array,10);
    showDLinkList(DL);
}

void testInsertIntoDLinkedList(){
    int *array = generalRandomIntArray(10, 100);
    showIntArray1(array,10);

    DSL DL = createDLinkedList();
    createDLinkedListFromHead(DL,array,10);
    showDLinkList(DL);

    insertIntoDLinkedList(DL,1,6666);
    insertIntoDLinkedList(DL,0,3333);
    showDLinkList(DL);

}

void testDeleteFromDLinkedList(){
    int *array = generalRandomIntArray(10, 100);
    showIntArray1(array,10);

    DSL DL = createDLinkedList();
    createDLinkedListFromHead(DL,array,10);
    showDLinkList(DL);

    deleteFromDLinkedList(DL,1);
    deleteFromDLinkedList(DL,0);
    showDLinkList(DL);
}

int maind_link_list(){

    //testCreateDLinkedListFromHead();
    //testInsertIntoDLinkedList();
    testDeleteFromDLinkedList();

    return 0;
}