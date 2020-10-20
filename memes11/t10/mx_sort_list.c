#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (list == 0) {
        return 0;

    t_list *p, *key;
    t_list *result = list;
    list = list->next;      
    result->next = NULL;

    while(list->next != NULL) {
        key = list;
        list = list->next;
        if (key->data < result->data) {
            key->next = result;
            result = key;
        } else {
            p = result;
            while (p->next != NULL) {
                if(cmp(p->next->data, key->data))
                    break;
                p = p->next;
            }
            key->next = p->next;
            p->next = key;
        }
    }
    return result;
}
