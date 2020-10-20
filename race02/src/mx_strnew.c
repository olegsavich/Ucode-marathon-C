#include "../inc/header.h"

char *mx_strnew(const int size) {
    char *str = malloc(size + 1);
    if (str == NULL) {
        return str;
    }
    for (int i = 0; i < size + 1; ++i) {
        str[i] = '\0';
    }
    return str;
}
