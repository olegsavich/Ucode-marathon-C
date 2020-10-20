#include <unistd.h>
void mx_printstr(const char *s);

void mx_printstr(const char *s){
    int i = 0;
    char c = s[i];
    while(c != 0){
        write(1, &c, 1);
        i++;
        c = s[i];
    }
}

