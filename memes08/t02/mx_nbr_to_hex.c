#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr){
    if (nbr > 4294967295){
        return 0;
    }
    unsigned int q = nbr; 
    int r, size = 0, j = 0;
    int temp = nbr;
    while (temp != 0){
        size++;
        temp /= 16;
    }
    char *hex  = (char *)malloc(size);
    while (q != 0){
        r = q % 16;
        if (r < 10)
            hex[j] = 48 + r;
        else 
            hex[j] = 87 + r;
        j++;
        q /= 16;
    }
    j--;
    for (int i = 0; i < j; i++, j--){
        char tmp = hex[i];
        hex[i] = hex[j];
        hex[j] = tmp;
    }
    return hex;
}

