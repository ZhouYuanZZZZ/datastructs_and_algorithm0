#include "utils.h"

//生成随机元素数组
int * generalRandomIntArray(int len, int max) {
	int * a = (int*)malloc(sizeof(int) * len);

	//设置种子
	srand((unsigned)time(NULL));

	for (int i = 0; i < len; i++) {
		*(a + i) = rand() % (max + 1);
	}
	return a;
}

void showIntArray(int * p, int len) {
	printf("[");
	for (int i = 0; i < len; i++) {
		printf("%d ", *(p + i));
	}
	printf("]");
}

void showIntArray1(int a[], int len) {
	printf("[");
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("]");
	printf("\n");
}