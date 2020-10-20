#include "only_smiths.h"

char *mx_strnew(const int);

char *mx_strcpy(char*, const char*);

unsigned long mx_strlen(const char*);

char *mx_strdup(const char *str) {
	if (str == NULL)
		return NULL;
	int size = (int)mx_strlen(str);
	char *result = mx_strnew(size);
	return mx_strcpy(result, str);
}
