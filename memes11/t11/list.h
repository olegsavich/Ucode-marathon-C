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

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b));

#endif
