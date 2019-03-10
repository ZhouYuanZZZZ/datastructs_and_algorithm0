#include "utils.h"
#include "s_link_list.h"


int common_test() {
    int *array = generalRandomIntArray(10, 100);
    SL L = createLinkedList();
    createLinkedListFromHead(L, array, 10);
    showSLinkedList(L);

    SL L0 = createLinkedList();
    createLinkedListFromTail(L0, array, 10);
    showSLinkedList(L0);

    int elem = getElemByIndex(L0, 3);
    printf("%d\n", elem);
    printf("%d\n", getIndexByElem(L0, elem));

    printf("length:%d\n", getListLength(L0));

    insertElem(L0, 4, 6666);
    showSLinkedList(L0);

    removeElem(L0, 2);
    showSLinkedList(L0);

    removeElem(L0, 0);
    showSLinkedList(L0);


    return 0;
}

int reverse_test() {
    int *array = generalRandomIntArray(10, 100);
    SL L = createLinkedList();
    createLinkedListFromHead(L, array, 10);
    showSLinkedList(L);

    reverseSeqlinkedList(L);
    showSLinkedList(L);
}

int main666() {
    reverse_test();

}