/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

cap_t garr_capacity(garr_t *self)
{
    return (self ? self->capacity : 0);
}