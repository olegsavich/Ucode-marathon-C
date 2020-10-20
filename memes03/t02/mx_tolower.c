int mx_tolower(int);

int mx_tolower(int c) {
    if (c >= 65 && c <= 90) {
        return (c+32);
    } 
    else {
        return c;
    }
}
