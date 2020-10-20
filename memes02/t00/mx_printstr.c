#include "mx_strlen.c"
#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s)
{
    write(1, s, mx_strlen(s));
}
