int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2)
{
    char *ptr = s1 + mx_strlen(s1);
    while (*s2 != '\0')
        *ptr++ = *s2++;
    *ptr = '\0';
    return s1;
}