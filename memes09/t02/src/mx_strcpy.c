char *mx_strcpy(char *dst, const char* src) {
    for (int i = 0; src[i] ; i++) {
        dst[i] = src[i];
    }
    return dst;
}
