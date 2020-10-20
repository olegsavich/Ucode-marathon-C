#include <limits.h>

int mx_factorial_rec(int n);

int mx_factorial_rec(int n){
    if(n > INT_MAX){
        return 0;
    }
    if (n >= 1){
        return n * mx_factorial_rec(n - 1);
    }
    else 
        return 1;
}

