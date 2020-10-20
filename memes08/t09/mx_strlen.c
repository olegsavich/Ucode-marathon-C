#include "only_smiths.h"

unsigned long mx_strlen(const char *s) {
	unsigned long i = 0;
	for (; s[i] != '\0'; i++) {}
	return i;
}
