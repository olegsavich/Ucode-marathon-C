#include <stdlib.h>
#include <stdio.h>
void mx_strdel(char **str) {
  if(*str) {
    int i = 0;
    while(str[i]) {
      str[i] = NULL;
      free(str[i]);
      i++;
    }
  }
}
