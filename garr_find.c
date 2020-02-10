/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

void *garr_find(garr_t *self, callback_func_t func, void *ctx)
{
    size_t idx = 0;

    if (!self || self->size == 0)
        return (0);
    while (idx < self->size && func(self->arr[idx], idx, ctx) == false)
        idx += 1;
    return ((idx < self->size) ? self->arr[idx] : NULL);
}

void *garr_find_from_end(garr_t *self, callback_func_t func, void *ctx)
{
    size_t idx;

    if (!self || self->size == 0)
        return (0);
    idx = self->size - 1;
    while (idx >= 0 && func(self->arr[idx], idx, ctx) == false)
        idx -= 1;
    return ((idx != -1) ? self->arr[idx] : NULL);
}