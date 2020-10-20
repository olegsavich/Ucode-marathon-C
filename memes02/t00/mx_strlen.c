#include <stdio.h>

int mx_strlen(const char *s){
        int len = 0;
	while(*s != 0) {
	s++;
	len++;
	}
	return len;
}
