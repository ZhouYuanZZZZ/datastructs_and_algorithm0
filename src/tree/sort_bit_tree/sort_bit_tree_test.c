#include "../../common/utils/utils.h"
#include "sort_bit_tree.h"

int main() {

   int array[10] = {5,8,7,4,56,98,12,45,63,123};

    sort_bit_tree pTree = create_sort_bit_tree(array, 10);
    in_order(pTree);


    return 0;
}