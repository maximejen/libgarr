/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

bool garr_contains(garr_t *self, void *elem)
{
    int i = -1;
    void **tmp;

    if (!self || !elem)
        return (false);
    tmp = self->arr;
    while (++i < self->size && tmp[i] != elem);
    return (tmp == elem);
}