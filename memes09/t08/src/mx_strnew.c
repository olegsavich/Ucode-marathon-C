#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 0) {
        return NULL;
    }
    char *result = (char *)malloc(size + 1);
    for (int i = 0; i < size+1; i++)
    {
        result[i] = '\0';
    }
    return result;
}
