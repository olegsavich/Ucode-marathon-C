#include "list.h"

void mx_clear_list(t_list **list) {
	t_list *current = *list;
	t_list *temp;
	while (current != NULL) {
		temp = current->next;
		free(current);
		current = temp;
	}
	free(temp);
	list = NULL;
}
