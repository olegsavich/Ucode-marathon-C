#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
  if(index <= 0) {
    mx_push_front(list, data);
  }
  
  t_list *current = *list;
  for (int i = 0; i < index - 1; i++) {
    if(current->next == NULL) {
      mx_push_back(list, data);
      return;
    }
    current = current->next;
  }

  t_list *new_node = mx_create_node(data);
  new_node->next = current->next;
  current->next = new_node;
}
