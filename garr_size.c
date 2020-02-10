/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

size_t garr_size(garr_t *self)
{
    return (self ? self->size : 0);
}