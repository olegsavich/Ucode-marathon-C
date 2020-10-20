int mx_sum_digits(int num){
    if(num < 0){
    num *= -1;
    }
    int sum = 0;
    while (num > 0){
    int a = num % 10;
    sum = sum + a;
    num  = num / 10;
    }
    return sum;
}
