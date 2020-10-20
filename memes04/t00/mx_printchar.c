#include <stdio.h>
#include <string.h>
#include <unistd.h>

void mx_printchar(char c)
{
    write(1, &c, 1);
} 
