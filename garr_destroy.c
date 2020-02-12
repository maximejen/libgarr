/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

void garr_destroy(garr_t *self)
{
    free(self);
}