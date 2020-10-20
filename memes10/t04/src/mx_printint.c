#include "header.h"

void mx_printint(int n) {
    char arr[55];
    long num = n;
    int i = 0;
    if (num == 0)
        write(1, n + '0', 1);
    if (num < 0) {
        num *= -1;
        write(1, n + '-', 1);
    }
    while (num != 0) {
        arr[i++] = (num % 10) + '0';
        num /= 10;
    }
    for (int j = i - 1; j >= 0; j--)
        write(1, arr[j], 1);
}
