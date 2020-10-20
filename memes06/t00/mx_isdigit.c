#include "stdbool.h"

bool mx_isdigit(int c) {
    return (char)(c + 48) >= '0' && (char)(c + 48) <= '9';
}
