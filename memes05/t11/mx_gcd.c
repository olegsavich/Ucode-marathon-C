int mx_gcd(int a, int b);

int mx_gcd(int a, int b){
    if (a  < 0){
        a *= -1;
    }
    if(b < 0)
    {
        b *= -1;
    }
    if (b != 0)
        return mx_gcd(b, a % b);
    else
        return a;
}

