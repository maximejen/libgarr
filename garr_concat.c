/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

garr_t *garr_concat(garr_t *self, garr_t *to_concat)
{
    size_t size;

    if (!self && !to_concat)
        return (self);
    size = garr_size(to_concat);
    garr_reserve(self, size);
    for (int i = 0; i < size; i++)
        garr_append(self, garr_at(to_concat, i));
    return (self);
}