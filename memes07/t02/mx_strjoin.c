#include <stdlib.h>
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char* dst, const char* src);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(char const *s1, char const *s2);

char *mx_strjoin(char const *s1, char const *s2){
    if (s1 == NULL && s2 == NULL){
        return NULL;
    }
    if(s1 == NULL && s2 != NULL){
        int len = mx_strlen(s2);
        char *c  = mx_strnew(len);
        c = mx_strdup(s2);
        return c;
    }
    if(s2 == NULL && s1 != NULL){
        int len = mx_strlen(s1);
        char *c  = mx_strnew(len);
        c = mx_strdup(s1);
        return c;
    }
    int len = 0;
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    len = len1 + len2;
    char *str = mx_strnew(len);
    str = mx_strcat(str, s1);
    str = mx_strcat(str, s2);
    return str;
}

