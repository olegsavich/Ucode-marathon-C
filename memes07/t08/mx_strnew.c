#include <stdlib.h>

char *mx_strnew(const int size);

char *mx_strnew(const int size) {
	if (size <= 0)
		return NULL;
	char *res = malloc(size + 1);
	for (int i = 0; i <= size; i++)
		res[i] = '\0';
	return res;
}
