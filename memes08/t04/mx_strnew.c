#include "get_address.h"

char *mx_strnew(const int size){
    if (size < 0){
        return NULL;
    }
    char *c = (char *)malloc(size + 1);
    for (int i = 0; i < size; i++){
        c[i] = '\0';
    }
    return c;
}
