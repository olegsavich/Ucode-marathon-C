#include <unistd.h>

void mx_only_printable(void);

void mx_only_printable(void)
{
    for(int i = 127; i >= 32; i--) {
        write(1, &i, 1);
    }
    write(1, "\n", 1);
}

