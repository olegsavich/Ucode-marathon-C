#include <stdio.h>

int mx_strlen(const char *s){
  int s_length = 0;
  while(*s != 0){
    s++;
    s_length++;
  }
  return s_length;
}
