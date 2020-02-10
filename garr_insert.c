/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include <stdio.h>
#include "garr.h"

bool garr_insert(garr_t *self, _idx_t idx, void *elem)
{
    _size_t size;

    if (!self || idx > self->size)
        return (false);
    if (self->size == idx)
        return (garr_append(self, elem) != -1);
    size = self->size + 1;
    if (size > self->capacity && !garr_grow_capacity(self, 1))
        return (false);
    memmove(self->arr + idx + 1, self->arr + idx, (self->size - idx) * sizeof(void *));
    garr_set(self, idx, elem);
    self->size = size;
    return (true);
}