/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

void *garr_remove(garr_t *self, _size_t idx)
{
    void *s;

    if (!self || idx < 0 || idx > self->size)
        return (NULL);
    s = self->arr[idx];
    memmove(self->arr + idx, self->arr + idx + 1,
            (self->size - idx) * sizeof(void *));
    self->size -= 1;
    return (s);
}
