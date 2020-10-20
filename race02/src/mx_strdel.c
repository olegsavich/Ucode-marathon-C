#include "../inc/header.h"

void mx_strdel(char **str) {
    for (int i = 0; str[i]; ++i){
        free(str[i]);
        str[i] = NULL;
    }
}
