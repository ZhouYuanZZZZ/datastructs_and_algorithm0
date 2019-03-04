#include <stdio.h>
#include "s_list.h"

/*
初始化线性表
*/
SeqList * initEmptySeqList(int size) {
	SeqList* seqList = (SeqList*)malloc(sizeof(SeqList));
	seqList->loc = -1;

	seqList->elem = (int*)malloc(sizeof(int)*size);

	return seqList;
}

//获取线性表长度
int getSlistLenth(SeqList* list) {
	return list->loc + 1;
}

//根据下标获取线性表元素
int getSlistElem(SeqList* list, int loc) {
	return *(list->elem + 1);
}

//获取指定元素下标
int getSlistElemLocation(SeqList* list, int elem) {

}

void insertSlist(SeqList* list, int elem, int loc) {
	//1.首先定位到线性表的末尾
	for (int i = list->loc;i >= loc;i--) {
		//2.逐个后移元素
		*(list->elem + i + 1) = *(list->elem + i);
	}
	//3.在位置插入元素
	*(list->elem + loc) = elem;
	//4.线性表长度+1
	list->loc++;
}

void updateSlist(SeqList* list, int elem, int loc) {
	*(list->elem + loc) = elem;
}

void deleteSlist(SeqList* list, int loc) {
	//找到待删除的位置 待删除元素后边的元素依次前移
	for (int i = loc;i < list->loc;i++) {
		*(list->elem + i) = *(list->elem + i + 1);
	}

	list->loc--;
}

void displaySlist(SeqList* list) {
	printf("[");
	for (int i = 0; i <= list->loc; i++) {
		printf("%d ", *(list->elem+i));
	}
	printf("]");
	printf("\n");
}