#include <stdbool.h>
#include <stdlib.h>
bool mx_isspace(char c);
char* mx_strcpy(char* dst, const char* src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_strtrim(const char *str){
    if (str == NULL){
        return NULL;
    }
    int start = 0, end = mx_strlen(str);
    for (int i = 0; i < mx_strlen(str); i++){
        if(!mx_isspace(str[i])){
            start = i;
            break;
        }
    }
    for (int i = mx_strlen(str) - 1; i >= start; i--){
        if(!mx_isspace(str[i])){
            end = i;
            break;
        }
    }
    int len = end - start + 1;
    char *c = mx_strnew(len + 1);
    for(int i = start, j = 0; i <= end; i++, j++){
        c[j] = str[i];
    }
    return c;
}

