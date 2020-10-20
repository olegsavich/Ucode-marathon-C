#include <stdbool.h>

bool mx_isdigit(int c) {
    for (int i = 48; i <= 57; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
