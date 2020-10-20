int mx_tolower(int c){
    c = c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
    return c;
}

