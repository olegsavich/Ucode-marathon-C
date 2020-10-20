#include "file_to_str.h"

int mx_strlen(const char *s) {
    int counter = 0;

    while (*s++)
        counter++;

    return counter;
}
