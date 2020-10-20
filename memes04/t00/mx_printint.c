void mx_printchar(char c);

void_mx_printint(int n);

void mx_printint(int n){
    long n1 = n;
    if(n1 < 0) mx_printchar('-');
    n1 *= -1;
    int m = 0;
    while (n1 > 0) {
        m = m*10 + n1%10;
        n1 = n1/10; 
    }
    n1 = m;
    while(n > 0){
        m = n1 % 10;
        mx_printchar(m + 48);
        n1 = n1 / 10;
    }
}