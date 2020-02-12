/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

_cap_t garr_left_capacity(garr_t *self)
{
    return (self ? (self->capacity) : 0);
}