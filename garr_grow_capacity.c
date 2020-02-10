/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

static cap_t calculate_grow_value(cap_t capacity)
{
    capacity -= 1;
    capacity |= capacity >> 1;
    capacity |= capacity >> 2;
    capacity |= capacity >> 4;
    capacity |= capacity >> 8;
    capacity |= capacity >> 16;
    capacity |= capacity >> 32;
    return (capacity + 1);
}

garr_t *garr_grow_capacity(garr_t *self, cap_t capacity)
{
    bool ret = garr_reserve(self, calculate_grow_value(self->size + capacity));

    return (ret ? self : NULL);
}