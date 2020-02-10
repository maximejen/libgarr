/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include <stdarg.h>

#include "garr.h"

size_t garr_prepend_multiple(garr_t *self, size_t nb, ...)
{
    va_list al;
    size_t new_size;
    size_t tsize = sizeof(void *);

    if (!self || nb == 0)
        return (-1);
    new_size = self->size + nb;
    if (new_size > self->capacity &&
        !garr_grow_capacity(self, self->capacity + new_size))
        return (-1);
    va_start(al, nb);
    memmove(self->arr + (tsize * nb), self->arr, self->size);
    for (size_t i = (nb - 1); i >= 0; i--)
        memmove(self->arr + (i * tsize), va_arg(al,void *), tsize);
    va_end(al);
    self->size = new_size;
    return (self->size);
}

size_t garr_prepend(garr_t *self, void *elem)
{
    size_t new_size;

    if (!self)
        return (-1);
    new_size = self->size + 1;
    if (new_size > self->capacity &&
        !garr_grow_capacity(self, self->capacity + new_size))
        return (-1);
    memmove(self->arr + sizeof(void *), self->arr, self->size);
    memmove(self->arr, elem, sizeof(void *));
    self->size = new_size;
    return (self->size);
}