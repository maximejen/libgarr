/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

void garr_for_each(garr_t *self, callback_func_t func, void *ctx)
{
    if (self == 0) return;
    for (_size_t idx = 0; idx < self->size; idx++)
        func(self->arr[idx], idx, ctx);
}