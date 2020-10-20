int mx_sqrt(int x) {
    if (x <= 0){
    return 0;
    }
    int count = 1;
    while (x > count * count) {
        count ++;
    }
    if (count * count == x) {
    return count;
    }
    return 0;
}