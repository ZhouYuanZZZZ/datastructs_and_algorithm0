#include "../../../common/utils/utils.h"
#include "s_list.h"

int main() {
	int *array = generalRandomIntArray(10, 100);
	SeqList* s =  initEmptySeqList(100);

	for (int i = 0;i < 10;i++) {
		insertSlist(s, *(array + i), i);
	}
	insertSlist(s, 6, 0);

	printf("%d", getSlistLenth(s));
	printf("\n");

	showIntArray1(s->elem, s->loc+1);
	return 0;
}