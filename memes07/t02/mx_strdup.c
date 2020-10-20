char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char* dst, const char* src);

char *mx_strdup(const char *str){
    int len = mx_strlen(str);
    char *str1; 
    str1 = mx_strnew(len);
    char *str2 = mx_strcpy(str1, str);
    return str2;
}

