int mx_toupper(int c){
    c = c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c;
    return c;
}

