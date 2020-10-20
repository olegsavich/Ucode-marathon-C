#include "list.h"

t_list *mx_create_node(void *data) {
	t_list *res = (t_list*)malloc(sizeof(t_list));
	res->data = data;
	res->next = NULL;
	return res;
}
