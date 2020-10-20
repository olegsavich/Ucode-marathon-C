#include "header.h"

int mx_count_lines(const char *str) {
    int counter = 0;

    for (int i = 0; i < mx_strlen(str); i++)
        if (str[i] == '\n')
            counter++;
    
    return counter;
}
