/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

void *garr_first(garr_t *self)
{
    if (!self || self->size == 0)
        return (NULL);
    return (self->arr[0]);
}