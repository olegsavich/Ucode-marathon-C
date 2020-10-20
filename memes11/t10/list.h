#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}               t_list;

t_list *mx_sort_list(t_list*list, bool(*cmp)(void*a, void*b));

#endif
