#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        char minInt[] = {"-2147483648"};
        for (int i = 0; minInt[i]; i++) {
            mx_printchar(minInt[i]);
        }
        return;
    }
    if (n < 0) {
        n = n * (-1);
        write(1, "-", 1);
    }
    if (n == 0) {
        write(1, "0", 1);
        return;
    }
    int rozrad=1;
    int tempN = n;
    long del = 1;
    while (tempN !=0) {
       tempN = (tempN / 10);
       rozrad++;
       del = del * 10;
    } 
    rozrad--;
    del = del / 10;

    for (; rozrad > 0; rozrad--) {
        char out;
        int tempOut = n;
        tempOut = tempOut / del;
        out =  tempOut + 48;
        mx_printchar(out);
        n = n % del;
        del = del / 10;
    }               
}
