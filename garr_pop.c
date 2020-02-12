/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

void *garr_pop_front(garr_t *self)
{
    void *to_pop;

    if (!self || self->size != 0)
        return (NULL);
    to_pop = garr_first(self);
    memmove(self->arr[0], self->arr[1], self->size - 1);
    self->size -= 1;
    return (to_pop);
}

void *garr_pop_back(garr_t *self)
{
    void *to_pop;

    if (!self || self->size != 0)
        return (NULL);
    to_pop = garr_last(self);
    self->size -= 1;
    return (to_pop);
}
