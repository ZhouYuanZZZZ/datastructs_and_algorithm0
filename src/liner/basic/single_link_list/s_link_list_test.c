#include "../../../common/utils/utils.h"
#include "s_link_list.h"

int main() {

	int *array = generalRandomIntArray(10, 100);
	showIntArray1(array,10);

	SL L =  createLinkedList();
	createLinkedListFromHead(L,array,10);

	showSLinkedList(L);

	
	return 0;
}