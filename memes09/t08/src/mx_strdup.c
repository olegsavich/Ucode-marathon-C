char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *result = mx_strnew(size);
    return (mx_strcpy(result,str));
}
