#include <stdlib.h>
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_nbr_to_hex(unsigned long nbr) {
  if (nbr < 0) {
    return 0;
  }
  char *hex = (char *)malloc(101);
    for (int i = 0; i < 100; i++){
        hex[i] = '\0';
}
  int i = 0;
  while (nbr != 0) {
    unsigned long temp = nbr % 16;
    if (temp < 10) {
      hex[i] = temp + 48;
      i++;
    }
    else {
      hex[i] = temp + 87;
      i++;
    }
    nbr = nbr / 16;
  }
  if (i < 0){
        return NULL;
    }
    char *res = (char *)malloc(i + 1);
    for (int j = 0; j < i; j++){
        res[j] = '\0';
    }
  for (int j = i -1, k = 0; j >= 0 && k < i; j--, k++) {
    res[k] = hex[j];
  }
  return res;
}

