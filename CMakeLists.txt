# cmake_minimum_required(VERSION <specify CMake version here>)
project(datastructs_and_algorithm_in_c C)

set(CMAKE_C_STANDARD 11)

include_directories(src/common/utils)
include_directories(src/liner)
include_directories(src/tree)


add_executable(datastructs_and_algorithm_in_c
        src/common/utils/utils.c
        src/common/utils/utils.h
        src/liner/basic/single_link_list/s_link_list.c
        src/liner/basic/single_link_list/s_link_list.h
        src/liner/basic/single_link_list/s_link_list_test.c
        src/liner/basic/single_list/s_list.c
        src/liner/basic/single_list/s_list.h
        src/liner/basic/single_list/s_list_test.c
        src/liner/basic/double_link_list/d_link_list.h
        src/liner/basic/double_link_list/d_link_list.c
        src/liner/basic/double_link_list/d_link_list_test.c
        src/liner/stack/seq_stack/seq_stack.h
        src/liner/stack/seq_stack/seq_stack.c
        src/liner/stack/seq_stack/seq_stack_test.c
        src/liner/stack/link_stack/link_stack.c
        src/liner/stack/link_stack/link_stack.h
        src/liner/stack/link_stack/link_stack_test.c
        src/liner/queue/seq_queue/seq_queue.h
        src/liner/queue/seq_queue/seq_queue.c
        src/liner/queue/seq_queue/seq_queue_test.c
        src/liner/queue/linked_queue/linked_queue.h
        src/liner/queue/linked_queue/linked_queue.c
        src/liner/queue/linked_queue/linked_queue_test.c
        src/tree/bitree/bit_tree.c
        src/tree/bitree/bit_tree.h
        src/tree/bitree/bit_tree_test.c
        src/tree/thread_bit_tree/thread_bit_tree.c
        src/tree/thread_bit_tree/thread_bit_tree.h
        src/tree/thread_bit_tree/thread_bit_tree_test.c
        )
