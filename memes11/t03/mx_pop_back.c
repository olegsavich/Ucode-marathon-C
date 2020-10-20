#include "list.h"
void mx_pop_back(t_list **list) {
  if(*list == NULL) {
    free(list);
    return;
  }
  
  if ( (*list)->next == NULL) {
    free(list);
    return;
  }
  t_list *current = *list;
  while(current->next->next != NULL) {
    current = current->next;
  }

  free(current->next);
  current->next = NULL;
}
