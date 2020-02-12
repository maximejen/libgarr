/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include <criterion/criterion.h>
#include <stdbool.h>
#include "../include/garr.h"

Test(garr_init, garr_init) {
    garr_t *arr = garr_init();
    cr_assert_eq(arr != NULL, true);
    garr_destroy(arr);
}

Test(garr_init_with_val, garr_init_with_val) {
    int tmp = 10;
    garr_t *arr = garr_init_with_val(&tmp);

    cr_assert_eq(arr != NULL, true,
        "[arr : %p]", arr);
    cr_assert_eq(garr_at(arr, 0), &tmp,
        "[In arr = %p, &tmp = %p] [arr.size = %lu, arr.cap = %lu]\n", garr_at(arr, 0), &tmp, garr_size(arr), garr_capacity(arr));
    garr_destroy(arr);
}

Test(garr_with_capacity, garr_with_capacity) {
    garr_t *arr = garr_with_capacity(10);
    cr_assert_eq(garr_capacity(arr), 10);
    garr_destroy(arr);
}

Test(garr_append_multiple_clone, garr_append_multiple_clone) {
    garr_t *arr = garr_with_capacity(1);

    garr_append_multiple(arr, 3, 0, 0, 0);
    garr_t *arr1 = garr_clone(arr);
    cr_assert_eq(garr_size(arr1), 3);
    cr_assert_eq(garr_size(arr), 3);
    garr_destroy(arr);
    garr_destroy(arr1);
}

Test(garr_insert, garr_insert) {
    garr_t *arr = garr_init();
    int a = 10;
    int b = 3;

    garr_append_multiple(arr, 3, &a, &a, &a);
    cr_assert_eq(garr_size(arr), 3);
    cr_assert_eq(garr_at(arr, 0), &a, "[arr[0] = %p, &a = %p]\n", garr_at(arr, 2), &a);
    cr_assert_eq(garr_at(arr, 2), &a, "[arr[2] = %p, &a = %p]\n", garr_at(arr, 2), &a);
    cr_assert_eq(garr_set(arr, 1, &b), true);
    cr_assert_eq(garr_at(arr, 1), &b);
    cr_assert_eq(garr_insert(arr, 1, 0) != 0, true);
    cr_assert_eq(garr_at(arr, 1), 0);
    cr_assert_eq(garr_at(arr, 2), &b);
    garr_destroy(arr);
}