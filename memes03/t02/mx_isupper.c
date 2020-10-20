#include <stdbool.h>

bool mx_isupper(int);

bool mx_isupper(int c){
    if (c >= 65 && c <= 90) {
        return true;
    } 
    else {
        return false;
    }
}
