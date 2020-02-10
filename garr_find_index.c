/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

_idx_t garr_find_index(garr_t *self, callback_func_t func, void *ctx)
{
    _size_t idx = 0;

    if (!self || self->size == 0)
        return (0);
    while (idx < self->size && func(self->arr[idx], idx, ctx) == false)
        idx += 1;
    return ((idx < self->size) ? idx : -1);
}

_idx_t garr_find_index_from_end(garr_t *self, callback_func_t func, void *ctx)
{
    _size_t idx;

    if (!self || self->size == 0)
        return (0);
    idx = self->size - 1;
    while (idx >= 0 && func(self->arr[idx], idx, ctx) == false)
        idx -= 1;
    return ((idx != -1) ? idx : -1);
}
