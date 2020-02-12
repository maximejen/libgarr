/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

garr_t *garr_filter(garr_t *self, callback_func_t func, void *ctx)
{
    if (self == 0) return (NULL);
    for (_size_t idx = 0; idx < self->size; idx++) {
        if (!func(self->arr[idx], idx, ctx))
            garr_remove(self, idx);
    }
    return (self);
}