/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

garr_t *garr_with_capacity(_size_t capacity)
{
    garr_t *arr = garr_init();

    if (capacity > 0 && arr && garr_reserve(arr, capacity))
        return (arr);
    return (NULL);
}