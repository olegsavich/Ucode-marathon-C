#include "header.h"

int mx_count_words(const char *str) {
    int counter = 0;
    char last = '\0';

    for (int i = 0; i < mx_strlen(str); i++) {
        if (mx_isspace(str[i])) {
            if (!mx_isspace(last))
                counter++;
        }
        last = str[i];
    }
    
    return counter;
}
