#include "../inc/header.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i;

    for(i = 0; s1[i] != '\0'; ++i) {
        if (s2[i] == '\0') {
            return 1;
        }
        if (s1[i] > s2[i]) {
            return 1;
        }
        else if (s1[i] < s2[i]) {
            return -1;
        }
    }
    if (s2[i] != '\0') {
        return -1;
    }
    return 0;
}
