#include "../inc/header.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    for (int i = 0; i < len && src[i] != '\0'; ++i) {
        dst[i] = src[i];
    }
    return dst;
}
