/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

bool garr_set(garr_t *self, idx_t idx, void *value)
{
    if (!self || self->size == 0 || idx > self->size)
        return (false);
    self->arr[idx] = value;
    return (true);
}