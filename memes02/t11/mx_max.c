int mx_max(int a, int b, int c){
    int max = 0;
    if (a > b && a > c){
    max = a;
    }
    else if(a > b && a < c){
    max = b;
    }
    else{
    max = c;
    }
    return max;
}
