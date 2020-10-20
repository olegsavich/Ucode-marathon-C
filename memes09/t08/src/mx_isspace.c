#include <stdbool.h>

bool mx_isspace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
        return true;
    }
    else {
        return false;
    }
}
