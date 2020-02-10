/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

static bool garr_sort_helper(garr_t *self, callback_cmp_func_t func)
{
    bool done = true;
    void *tmp;
    _size_t before_last = self->size - 1;

    for (_size_t idx = 0; idx < before_last; idx++)
        if (func(self->arr[idx], idx, self->arr[idx + 1], idx + 1) > 0) {
            done = false;
            tmp = self->arr[idx];
            self->arr[idx] = self->arr[idx + 1];
            self->arr[idx + 1] = tmp;
        }
    return (done);
}

garr_t *garr_sort(garr_t *self, callback_cmp_func_t func)
{
    if (self == 0 || self->size == 0)
        return (0);
    while (garr_sort_helper(self, func) == false);
    return (self);
}