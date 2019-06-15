#ifndef ALGORITHMINC_SLIST_H
#define ALGORITHMINC_SLIST_H


typedef struct SListStruct {
	int loc;
	int * elem;
} SeqList;

SeqList * initEmptySeqList(int size);

int getSlistLenth(SeqList* list);

int getSlistElem(SeqList* list, int loc);

int getSlistElemLocation(SeqList* list, int elem);

void insertSlist(SeqList* list, int elem, int loc);

void updateSlist(SeqList* list, int elem, int loc);

void deleteSlist(SeqList* list, int loc);

void displaySlist(SeqList* list);

#endif //ALGORITHMINC_SLIST_H#pragma once
