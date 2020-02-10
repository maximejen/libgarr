/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

garr_t *garr_map(garr_t *self, callback_func_t func, void *ctx)
{
    garr_t *arr = garr_init();

    if (self == 0) return (NULL);
    for (_size_t idx = 0; idx < self->size; idx++) {
        if (func(self->arr[idx], idx, ctx))
            garr_append(arr, self->arr[idx]);
    }
    return (arr);
}