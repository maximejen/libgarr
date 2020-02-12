/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

_size_t garr_size(garr_t *self)
{
    return (self ? self->size : 0);
}