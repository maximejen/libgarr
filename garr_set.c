/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

bool garr_set(garr_t *self, _idx_t idx, void *value)
{
    if (!self || self->size == 0 || idx > self->size)
        return (false);
    self->arr[idx] = value;
    return (true);
}