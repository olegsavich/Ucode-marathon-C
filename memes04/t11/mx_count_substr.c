#include <stdio.h>
int mx_strncmp(const char *s1, const char *s2, int n);

int mx_strlen(const char *s);

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub)
{
    int l1 = mx_strlen(str), l2 = mx_strlen(sub), i, j, count = 0, found = 0;
    if (l2 == 0) 
        return 0;
    for (i = 0; i < l1 - l2; ++i) {
        found = 1;
        for (j = 0; j < l2; ++j) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            count++;
            i = i + l2 - 1;
        }
    }
    return count;
}
