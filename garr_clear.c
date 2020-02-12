/*
** EPITECH PROJECT, 2020
** libgarr
** File description:
**
*/

#include "include/garr.h"

void garr_clear(garr_t *self, bool should_free_items)
{
    int i = 0;

    if (!should_free_items)
        memset(self->arr, 0, self->size);
    else
        while (i < self->size) {
            free(self->arr[i]);
            self->arr[i] = NULL;
            i++;
        }
}