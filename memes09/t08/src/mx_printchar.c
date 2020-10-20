#include <unistd.h>

void mx_printchar(char c) {
    char text[] = "0";
    text[0] = c;
    write(1, text, 1);
}

