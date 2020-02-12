/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

garr_t *garr_clone(garr_t *to_copy)
{
    garr_t *arr;

    if (!to_copy)
        return (NULL);
    arr = garr_with_capacity(to_copy->capacity);
    if (!arr)
        return (NULL);
    memmove(arr, to_copy, (2 * sizeof(_size_t) + to_copy->size));
    return (arr);
}
