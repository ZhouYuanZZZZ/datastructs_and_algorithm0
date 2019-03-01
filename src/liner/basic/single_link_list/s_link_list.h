#ifndef S_LINK_LIST
#define S_LINK_LIST

typedef struct SNode {
	int data;
	struct SNode* next;
}SNode, *SL;



SL createLinkedList();

//头插法建立单链表
void createLinkedListFromHead(SL L, int a[], int len);

void destroyLinkedList(SL L);


void insertDataIntoListHead(SL L,int data);

void createLinkedListFromTail(SL L, int a[], int len);

SNode * insertDataIntoListTail(SNode * tail, int data);


int getElemByIndex(SL L, int index);


int getIndexByElem(SL L, int elem);

void showSLinkedList(SL L);


int getListLength(SL L);


int insertElem(SL L, int index, int elem);


int removeElem(SL L, int index);


SL mergeLinkList(SL L1, SL L2);


void reverseSeqlinkedList(SL L);

#endif