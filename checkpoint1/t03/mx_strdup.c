#include <stdlib.h>
char *mx_strdup(const char *str);
char *mx_strdup(const char *str){
    int len = 0;
    while (str[len]) {
        len++;
    }
    if (len < 0){
        return NULL;
    }
    char *str1 = (char *)malloc(len + 1);
    for (int i = 0; i < len; i++){
        str1[i] = '\0';
    }
    int count = 0;
    while(*str) {
        *str1++ = *str++;
        count++;
    }
    str1 -= count;
    return str1;
}

