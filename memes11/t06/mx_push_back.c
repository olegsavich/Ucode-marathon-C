#include "list.h"

void mx_push_back(t_list **list, void *data) {
  t_list *current = *list;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next = (t_list *)malloc(sizeof(t_list));
  current->next->data = data;
  current->next->next = NULL;
}
