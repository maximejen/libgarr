/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
** Constructor of Generic Array object.
*/

#include "include/garr.h"

garr_t *garr_init(void)
{
    return (calloc(1, sizeof(garr_t)));
}

