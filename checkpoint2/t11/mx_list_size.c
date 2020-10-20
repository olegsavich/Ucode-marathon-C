#include "list.h"

int mx_list_size(t_list *list) {
	int count = 0;
	t_list *current = list;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

