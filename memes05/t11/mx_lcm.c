
int mx_gcd(int a, int b);
int mx_lcm(int a, int b);

int mx_lcm(int a, int b){
    if(b == 0){
        return 0;
    }
    if (a < 0){
        a *= -1;
    }
    if (b < 0){
        b *= -1;
    }
    int hcf = mx_gcd(a,b);
    return (a * b) / hcf;
}

