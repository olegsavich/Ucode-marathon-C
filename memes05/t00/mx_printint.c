
void mx_printint(int n);

void mx_printint(int n){
    char c[55];
    long n1 = n;
    int i =  0;
    if (n == 0)
        mx_printchar(0+'0');
    if (n1< 0) {
        n1 = n1 * -1;
        mx_printchar('-');
    }
    while (n1 != 0){
        c[i++] = (n1 % 10) + '0';
        n1 = n1 / 10;
    }
    for (int j = i - 1; j >= 0; j--){
        mx_printchar(c[j]);
    }
}

