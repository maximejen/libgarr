/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include <stdarg.h>

#include "include/garr.h"

_size_t garr_append_multiple(garr_t *self, _size_t nb, ...)
{
    va_list list;
    _size_t last_size;
    _size_t new_size;

    if (!self)
        return (-1);
    last_size = self->size;
    new_size = self->size + nb;
    if (new_size > self->capacity && !garr_grow_capacity(self, new_size))
        return (-1);
    self->size = new_size;
    va_start(list, nb);
    for (_size_t i = last_size; i < new_size; i++)
        garr_set(self, i, va_arg(list, void *));
    va_end(list);
    return (self->size);
}

_size_t garr_append(garr_t *self, void *elem)
{
    _size_t new_size;

    if (!self)
        return (-1);
    new_size = self->size + 1;
    if (new_size > self->capacity && !garr_grow_capacity(self, 1))
        return (-1);
    self->size = new_size;
    garr_set(self, self->size - 1, elem);
    return (self->size);
}