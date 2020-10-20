#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *current = *list;
    t_list *temp_node = NULL;

    while (current->next != NULL) {
        if (cmp(current->next->data, del_data)) {
            temp_node = current->next;
            current->next = temp_node->next;
        }
        current = current->next;
    }
    free(temp_node);
}
