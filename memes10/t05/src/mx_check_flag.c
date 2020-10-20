#include "header.h"

bool mx_check_flag(char *flag) {
    if (mx_strlen(flag) == 2) {
        switch (flag[1]) {
            case 'n':
            case 's':
            case 'p': return true; break;
        }
    }
    return false;
}
