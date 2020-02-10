/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

void *garr_at(garr_t *self, idx_t idx)
{
    if (!self || self->size == 0 || idx > self->size)
        return (NULL);
    return (self->arr[idx]);
}