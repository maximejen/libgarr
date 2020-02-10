/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "garr.h"

bool garr_reserve(garr_t *self, cap_t capacity)
{
    void **new_values = NULL;

    if (!self || capacity < self->capacity)
        return (false);
    new_values = realloc(self->arr, capacity * sizeof(void *));
    if (!new_values)
        return (false);
    self->arr = new_values;
    self->capacity = capacity;
    return (true);
}
