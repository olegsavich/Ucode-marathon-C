#include "list.h"
void mx_clear_list(t_list **list) {
   if(*list == NULL) {
    return;
  }
  while ((*list)->next != NULL) {
    
    t_list *current = *list;
    while(current->next->next != NULL) {
      current = current->next;
    }

    free(current->next);
    current->next = NULL;
  }
  free(*list);
  *list = NULL;
}