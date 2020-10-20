#include "header.h"

bool mx_isspace(char c) {
    for (int space = 9; space <= 13; space++)
        if (c == (char)space)
            return true;

    return c == (char)32 ? true : false;
}
