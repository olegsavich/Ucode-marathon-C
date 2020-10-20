#include "list.h"
void mx_pop_index(t_list **list, int index) {
  if(index <= 0) {
    mx_pop_front(list);
  }
  
  t_list *current = *list;
  for (int i = 0; i < index - 1; i++) {
    if(current->next == NULL) {
      mx_pop_back(list);
      return;
    }
    current = current->next;
  }

  t_list *temp_node = current->next;
  current->next = temp_node->next;
  free(temp_node);
}