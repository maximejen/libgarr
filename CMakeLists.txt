cmake_minimum_required(VERSION 3.15)
project(libgarr C)

set(CMAKE_C_STANDARD 11)

add_library(libgarr
        garr.h
        garr_init.c
        garr_init_with_value.c
        garr_reserve.c
        garr_with_capacity.c
        garr_clone.c
        garr_contains.c
        garr_set.c
        garr_at.c
        garr_first.c
        garr_last.c
        garr_clear.c
        garr_destroy.c
        garr_size.c
        garr_capacity.c
        garr_left_capacity.c
        garr_append.c
        garr_grow_capacity.c
        garr_prepend.c
        garr_insert.c
        garr_pop.c garr_remove.c garr_concat.c garr_where.c garr_find.c garr_find_index.c)

add_executable(test_garr_lib
        garr_init.c
        garr_init_with_value.c
        garr_reserve.c
        garr_with_capacity.c
        garr_clone.c
        garr_contains.c
        garr_set.c
        garr_at.c
        garr_first.c
        garr_last.c
        garr_clear.c
        garr_destroy.c
        garr_size.c
        garr_capacity.c
        garr_left_capacity.c
        garr_append.c
        garr_grow_capacity.c
        garr_prepend.c
        garr_insert.c
        test/garr.test.c
        )

list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/.cmake")

set(CMAKE_C_FLAGS "-isystem /usr/local/include -L/usr/local/Cellar/criterion/2.3.3/lib/ -lcriterion")

#find_library(criterion REQUIRED)
#include_directories(${CRITERION_INCLUDE_DIR})
#target_link_libraries(test_garr_lib ${CRITERION_LIBRARIES})