#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr){
if (nbr < 0) {
    return 0;
  }
  char *hex = mx_strnew(100);
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
  char *res = mx_strnew(i + 2);
  res[0] = '0';
  res[1] = 'x';
  for (int j = i -1, k = 2; j >= 0 && k < i + 2; j--, k++) {
    res[k] = hex[j];
  }
  free(hex);
  return res;
}

