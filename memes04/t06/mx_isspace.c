#include <stdbool.h>

bool mx_isspace(char c) {
        if (c == ' ' || c == '\t' || c == '\n' ) {
                return true;
        }
        if (c == '\v' || c == '\f' || c == '\r') {
                return true;
        }
        return false;
}
