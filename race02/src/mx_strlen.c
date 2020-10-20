#include "../inc/header.h"

int mx_strlen(const char *s) {
    const char* str = s;

    for(; *str; ++str);
    return str - s;
}
