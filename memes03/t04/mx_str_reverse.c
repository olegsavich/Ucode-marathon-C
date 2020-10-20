int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);

void mx_str_reverse(char *s) {
    int len = mx_strlen(s);
    int i = 0;
    while(i < len/2){
        mx_swap_char(&s[i], &s[len-1]);
        i++;
        len--;
    }
}
