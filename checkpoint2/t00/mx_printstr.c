#include <unistd.h>

void mx_printstr(const char *s);

void mx_printstr(const char *s) {
	unsigned long i = 0;
	for (; s[i] != '\0'; i++) {}
	write(1, s, i);
}

