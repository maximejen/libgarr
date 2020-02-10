/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

cap_t garr_left_capacity(garr_t *self)
{
    return (self ? (self->capacity - self->capacity) : 0);
}