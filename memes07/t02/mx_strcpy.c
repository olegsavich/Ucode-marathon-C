char* mx_strcpy(char* dst, const char* src) {
    int count = 0;
    while(*src) {
        *dst++ = *src++;
        count++;
    }
    dst -= count;
    return dst;
}

