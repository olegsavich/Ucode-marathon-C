#include "file_to_str.h"

char *mx_strcpy(char *dst, const char *src) {
    char *start = dst;

    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }

    *dst = '\0';

    return start;
}
