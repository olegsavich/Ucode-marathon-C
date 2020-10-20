#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isspace(char c){
    if (c >= '\t' && c <= ' '){
        return true;
    }
    else{
        return false;
    }
}

