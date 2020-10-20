#include "list.h"

int mx_list_size(t_list *list) {
  if (list == NULL) {
    return 0;
  }
  if (list->next == NULL) {
    return 1;
  }
  int count_size = 1;
  t_list *current = list;
  while (current->next != NULL)
  {
    count_size++;
    current = current->next;
  }
}
