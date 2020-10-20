#include "list.h"
void mx_pop_front(t_list **list) {
  t_list *current = NULL;

  if(*list == NULL) {
    return;
  }

  current = (*list)->next;
  free(*list);
  *list = current;

}
