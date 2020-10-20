#include <stdbool.h>

int mx_atoi(const char *str) {
    int res = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && c <= '9')
            res = res * 10 + str[i] - '0';
        else
            break;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
            break;
    }
    return res;
}
int main(){
    print("%d", mx_atoi("b"));
}