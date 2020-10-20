#include "../inc/header.h"

char *mx_strtrim(const char *str) {
    int len = mx_strlen(str);
    int start = 0;
    int last = 0;
    char *result;

    if (!str)
        return NULL;
        for (int i = 0; mx_isspace(str[i]); ++i) {
            start++;
        }
        for(int j = len - 1 ; mx_isspace(str[j]); --j) {
            last++;
        }
        result = mx_strnew(len - start - last);
        mx_strncpy(result, str + start , len - start - last);
        return result;
}
