#ifndef GARR_LIBRARY_H
# define GARR_LIBRARY_H

# pragma once

# include <stdlib.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>

typedef int _size_t;
typedef int _cap_t;
typedef int _idx_t;

// Generic Array definition
typedef struct s_garr {
    _size_t   size;
    _cap_t    capacity;
    void        **arr;
} garr_t;


typedef bool (*callback_func_t)(void *elem, _size_t idx, void *ctx);
typedef bool (*callback_cmp_func_t)(void *, _idx_t , void *, _idx_t);

// Initialization
garr_t  *garr_init(void);
garr_t  *garr_init_with_val(void *val);
garr_t  *garr_with_capacity(_size_t capacity);
garr_t  *garr_clone(garr_t *);

// Item specific access
bool    garr_set(garr_t *, _idx_t, void *);
bool    garr_contains(garr_t *, void *);
void	*garr_at(garr_t *self, _idx_t);
void	*garr_first(garr_t *self);
void	*garr_last(garr_t *self);

// Destruction
void    garr_clear(garr_t *, bool should_free_items);
void    garr_destroy(garr_t *);

// Getters
_size_t  garr_size(garr_t *);
_cap_t   garr_capacity(garr_t *);
_cap_t   garr_left_capacity(garr_t *);

// Add & Remove elements
_size_t  garr_append(garr_t *, void *);
_size_t  garr_append_multiple(garr_t *, _size_t nb, ...);
_size_t  garr_prepend(garr_t *, void *);
_size_t  garr_prepend_multiple(garr_t *, _size_t nb, ...);
bool    garr_insert(garr_t *, _idx_t, void *);
void	*garr_pop_front(garr_t *);
void	*garr_pop_back(garr_t *);
void    *garr_remove(garr_t *, _size_t idx);

// Affects array capacity
bool    garr_reserve(garr_t *, _cap_t);
garr_t  *garr_concat(garr_t *, garr_t *);
garr_t  *garr_grow_capacity(garr_t *, _cap_t);

// Find elements
_idx_t   garr_where(garr_t *, void *);
_idx_t   garr_where_from_end(garr_t *, void *);
void    *garr_find(garr_t *, callback_func_t, void *ctx);
void    *garr_find_from_end(garr_t *, callback_func_t, void *ctx);
_idx_t	garr_find_index(garr_t *, callback_func_t, void *ctx);
_idx_t	garr_find_index_from_end(garr_t *, callback_func_t, void *ctx);

// Array iteration
garr_t  *garr_sort(garr_t *, callback_cmp_func_t);
garr_t  *garr_map(garr_t *, callback_func_t, void *);
garr_t  *garr_filter(garr_t *, callback_func_t, void *);
void    garr_for_each(garr_t *, callback_func_t, void *);

#endif //GARR_LIBRARY_H
