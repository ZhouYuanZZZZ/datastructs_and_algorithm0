# cmake_minimum_required(VERSION <specify CMake version here>)
project(datastructs_and_algorithm_in_c C)

set(CMAKE_C_STANDARD 11)

include_directories(src/common/utils)
include_directories(src/liner/basic/single_link_list)
include_directories(src/liner/basic/single_list)

add_executable(datastructs_and_algorithm_in_c
        src/common/utils/utils.c
        src/common/utils/utils.h
        src/liner/basic/single_link_list/s_link_list.c
        src/liner/basic/single_link_list/s_link_list.h
        src/liner/basic/single_link_list/s_link_list_test.c
        src/liner/basic/single_list/s_list.c
        src/liner/basic/single_list/s_list.h
        src/liner/basic/single_list/s_list_test.c src/liner/basic/double_link_list/d_link_list.h src/liner/basic/double_link_list/d_link_list.c src/liner/basic/double_link_list/d_link_list_test.c)
