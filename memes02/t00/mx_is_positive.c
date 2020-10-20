#include "mx_printstr.c"
#include <stdio.h>

void mx_is_positive(int i) {
    if (i > 0) {
    mx_printstr("positive\n");
    }
    else if (i < 0) {
    mx_printstr("negative\n");
    }
    else {
    mx_printstr("zero\n");
    }
}


