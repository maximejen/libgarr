/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

_idx_t garr_where(garr_t *self, void *elem)
{
    _idx_t i;

    if (!self)
        return (-1);
    for (i = 0 ; i < self->size && self->arr[i] != elem; i++);
    return (self->arr[i] == elem ? i : -1);
}

_idx_t garr_where_from_end(garr_t *self, void *elem)
{
    _idx_t i;

    if (!self)
        return (-1);
    for (i = self->size - 1 ; i >= 0 && self->arr[i] != elem; i--);
    return (self->arr[i] == elem ? i : -1);
}
