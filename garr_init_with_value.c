/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

garr_t *garr_init_with_val(void *val)
{
    garr_t *arr = garr_init();

    garr_append(arr, val);
    return (arr);
}